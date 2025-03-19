/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/dataexchange/model/SchemaChangeDetails.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DataExchange
{
namespace Model
{

  /**
   * <p>Extra details specific to this schema change type notification.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/SchemaChangeRequestDetails">AWS
   * API Reference</a></p>
   */
  class SchemaChangeRequestDetails
  {
  public:
    AWS_DATAEXCHANGE_API SchemaChangeRequestDetails() = default;
    AWS_DATAEXCHANGE_API SchemaChangeRequestDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API SchemaChangeRequestDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of schema changes happening in the scope of this notification. This can
     * have up to 100 entries.</p>
     */
    inline const Aws::Vector<SchemaChangeDetails>& GetChanges() const { return m_changes; }
    inline bool ChangesHasBeenSet() const { return m_changesHasBeenSet; }
    template<typename ChangesT = Aws::Vector<SchemaChangeDetails>>
    void SetChanges(ChangesT&& value) { m_changesHasBeenSet = true; m_changes = std::forward<ChangesT>(value); }
    template<typename ChangesT = Aws::Vector<SchemaChangeDetails>>
    SchemaChangeRequestDetails& WithChanges(ChangesT&& value) { SetChanges(std::forward<ChangesT>(value)); return *this;}
    template<typename ChangesT = SchemaChangeDetails>
    SchemaChangeRequestDetails& AddChanges(ChangesT&& value) { m_changesHasBeenSet = true; m_changes.emplace_back(std::forward<ChangesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A date in the future when the schema change is taking effect.</p>
     */
    inline const Aws::Utils::DateTime& GetSchemaChangeAt() const { return m_schemaChangeAt; }
    inline bool SchemaChangeAtHasBeenSet() const { return m_schemaChangeAtHasBeenSet; }
    template<typename SchemaChangeAtT = Aws::Utils::DateTime>
    void SetSchemaChangeAt(SchemaChangeAtT&& value) { m_schemaChangeAtHasBeenSet = true; m_schemaChangeAt = std::forward<SchemaChangeAtT>(value); }
    template<typename SchemaChangeAtT = Aws::Utils::DateTime>
    SchemaChangeRequestDetails& WithSchemaChangeAt(SchemaChangeAtT&& value) { SetSchemaChangeAt(std::forward<SchemaChangeAtT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SchemaChangeDetails> m_changes;
    bool m_changesHasBeenSet = false;

    Aws::Utils::DateTime m_schemaChangeAt{};
    bool m_schemaChangeAtHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
