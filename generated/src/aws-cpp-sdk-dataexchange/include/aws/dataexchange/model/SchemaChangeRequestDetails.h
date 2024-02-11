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
    AWS_DATAEXCHANGE_API SchemaChangeRequestDetails();
    AWS_DATAEXCHANGE_API SchemaChangeRequestDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API SchemaChangeRequestDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>List of schema changes happening in the scope of this notification. This can
     * have up to 100 entries.</p>
     */
    inline const Aws::Vector<SchemaChangeDetails>& GetChanges() const{ return m_changes; }

    /**
     * <p>List of schema changes happening in the scope of this notification. This can
     * have up to 100 entries.</p>
     */
    inline bool ChangesHasBeenSet() const { return m_changesHasBeenSet; }

    /**
     * <p>List of schema changes happening in the scope of this notification. This can
     * have up to 100 entries.</p>
     */
    inline void SetChanges(const Aws::Vector<SchemaChangeDetails>& value) { m_changesHasBeenSet = true; m_changes = value; }

    /**
     * <p>List of schema changes happening in the scope of this notification. This can
     * have up to 100 entries.</p>
     */
    inline void SetChanges(Aws::Vector<SchemaChangeDetails>&& value) { m_changesHasBeenSet = true; m_changes = std::move(value); }

    /**
     * <p>List of schema changes happening in the scope of this notification. This can
     * have up to 100 entries.</p>
     */
    inline SchemaChangeRequestDetails& WithChanges(const Aws::Vector<SchemaChangeDetails>& value) { SetChanges(value); return *this;}

    /**
     * <p>List of schema changes happening in the scope of this notification. This can
     * have up to 100 entries.</p>
     */
    inline SchemaChangeRequestDetails& WithChanges(Aws::Vector<SchemaChangeDetails>&& value) { SetChanges(std::move(value)); return *this;}

    /**
     * <p>List of schema changes happening in the scope of this notification. This can
     * have up to 100 entries.</p>
     */
    inline SchemaChangeRequestDetails& AddChanges(const SchemaChangeDetails& value) { m_changesHasBeenSet = true; m_changes.push_back(value); return *this; }

    /**
     * <p>List of schema changes happening in the scope of this notification. This can
     * have up to 100 entries.</p>
     */
    inline SchemaChangeRequestDetails& AddChanges(SchemaChangeDetails&& value) { m_changesHasBeenSet = true; m_changes.push_back(std::move(value)); return *this; }


    /**
     * <p>A date in the future when the schema change is taking effect.</p>
     */
    inline const Aws::Utils::DateTime& GetSchemaChangeAt() const{ return m_schemaChangeAt; }

    /**
     * <p>A date in the future when the schema change is taking effect.</p>
     */
    inline bool SchemaChangeAtHasBeenSet() const { return m_schemaChangeAtHasBeenSet; }

    /**
     * <p>A date in the future when the schema change is taking effect.</p>
     */
    inline void SetSchemaChangeAt(const Aws::Utils::DateTime& value) { m_schemaChangeAtHasBeenSet = true; m_schemaChangeAt = value; }

    /**
     * <p>A date in the future when the schema change is taking effect.</p>
     */
    inline void SetSchemaChangeAt(Aws::Utils::DateTime&& value) { m_schemaChangeAtHasBeenSet = true; m_schemaChangeAt = std::move(value); }

    /**
     * <p>A date in the future when the schema change is taking effect.</p>
     */
    inline SchemaChangeRequestDetails& WithSchemaChangeAt(const Aws::Utils::DateTime& value) { SetSchemaChangeAt(value); return *this;}

    /**
     * <p>A date in the future when the schema change is taking effect.</p>
     */
    inline SchemaChangeRequestDetails& WithSchemaChangeAt(Aws::Utils::DateTime&& value) { SetSchemaChangeAt(std::move(value)); return *this;}

  private:

    Aws::Vector<SchemaChangeDetails> m_changes;
    bool m_changesHasBeenSet = false;

    Aws::Utils::DateTime m_schemaChangeAt;
    bool m_schemaChangeAtHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
