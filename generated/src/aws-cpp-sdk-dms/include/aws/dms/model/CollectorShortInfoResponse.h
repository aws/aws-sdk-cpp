/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Briefly describes a Fleet Advisor collector.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CollectorShortInfoResponse">AWS
   * API Reference</a></p>
   */
  class CollectorShortInfoResponse
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API CollectorShortInfoResponse() = default;
    AWS_DATABASEMIGRATIONSERVICE_API CollectorShortInfoResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API CollectorShortInfoResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The reference ID of the Fleet Advisor collector.</p>
     */
    inline const Aws::String& GetCollectorReferencedId() const { return m_collectorReferencedId; }
    inline bool CollectorReferencedIdHasBeenSet() const { return m_collectorReferencedIdHasBeenSet; }
    template<typename CollectorReferencedIdT = Aws::String>
    void SetCollectorReferencedId(CollectorReferencedIdT&& value) { m_collectorReferencedIdHasBeenSet = true; m_collectorReferencedId = std::forward<CollectorReferencedIdT>(value); }
    template<typename CollectorReferencedIdT = Aws::String>
    CollectorShortInfoResponse& WithCollectorReferencedId(CollectorReferencedIdT&& value) { SetCollectorReferencedId(std::forward<CollectorReferencedIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Fleet Advisor collector.</p>
     */
    inline const Aws::String& GetCollectorName() const { return m_collectorName; }
    inline bool CollectorNameHasBeenSet() const { return m_collectorNameHasBeenSet; }
    template<typename CollectorNameT = Aws::String>
    void SetCollectorName(CollectorNameT&& value) { m_collectorNameHasBeenSet = true; m_collectorName = std::forward<CollectorNameT>(value); }
    template<typename CollectorNameT = Aws::String>
    CollectorShortInfoResponse& WithCollectorName(CollectorNameT&& value) { SetCollectorName(std::forward<CollectorNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_collectorReferencedId;
    bool m_collectorReferencedIdHasBeenSet = false;

    Aws::String m_collectorName;
    bool m_collectorNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
