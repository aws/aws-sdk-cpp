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
    AWS_DATABASEMIGRATIONSERVICE_API CollectorShortInfoResponse();
    AWS_DATABASEMIGRATIONSERVICE_API CollectorShortInfoResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API CollectorShortInfoResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The reference ID of the Fleet Advisor collector.</p>
     */
    inline const Aws::String& GetCollectorReferencedId() const{ return m_collectorReferencedId; }

    /**
     * <p>The reference ID of the Fleet Advisor collector.</p>
     */
    inline bool CollectorReferencedIdHasBeenSet() const { return m_collectorReferencedIdHasBeenSet; }

    /**
     * <p>The reference ID of the Fleet Advisor collector.</p>
     */
    inline void SetCollectorReferencedId(const Aws::String& value) { m_collectorReferencedIdHasBeenSet = true; m_collectorReferencedId = value; }

    /**
     * <p>The reference ID of the Fleet Advisor collector.</p>
     */
    inline void SetCollectorReferencedId(Aws::String&& value) { m_collectorReferencedIdHasBeenSet = true; m_collectorReferencedId = std::move(value); }

    /**
     * <p>The reference ID of the Fleet Advisor collector.</p>
     */
    inline void SetCollectorReferencedId(const char* value) { m_collectorReferencedIdHasBeenSet = true; m_collectorReferencedId.assign(value); }

    /**
     * <p>The reference ID of the Fleet Advisor collector.</p>
     */
    inline CollectorShortInfoResponse& WithCollectorReferencedId(const Aws::String& value) { SetCollectorReferencedId(value); return *this;}

    /**
     * <p>The reference ID of the Fleet Advisor collector.</p>
     */
    inline CollectorShortInfoResponse& WithCollectorReferencedId(Aws::String&& value) { SetCollectorReferencedId(std::move(value)); return *this;}

    /**
     * <p>The reference ID of the Fleet Advisor collector.</p>
     */
    inline CollectorShortInfoResponse& WithCollectorReferencedId(const char* value) { SetCollectorReferencedId(value); return *this;}


    /**
     * <p>The name of the Fleet Advisor collector.</p>
     */
    inline const Aws::String& GetCollectorName() const{ return m_collectorName; }

    /**
     * <p>The name of the Fleet Advisor collector.</p>
     */
    inline bool CollectorNameHasBeenSet() const { return m_collectorNameHasBeenSet; }

    /**
     * <p>The name of the Fleet Advisor collector.</p>
     */
    inline void SetCollectorName(const Aws::String& value) { m_collectorNameHasBeenSet = true; m_collectorName = value; }

    /**
     * <p>The name of the Fleet Advisor collector.</p>
     */
    inline void SetCollectorName(Aws::String&& value) { m_collectorNameHasBeenSet = true; m_collectorName = std::move(value); }

    /**
     * <p>The name of the Fleet Advisor collector.</p>
     */
    inline void SetCollectorName(const char* value) { m_collectorNameHasBeenSet = true; m_collectorName.assign(value); }

    /**
     * <p>The name of the Fleet Advisor collector.</p>
     */
    inline CollectorShortInfoResponse& WithCollectorName(const Aws::String& value) { SetCollectorName(value); return *this;}

    /**
     * <p>The name of the Fleet Advisor collector.</p>
     */
    inline CollectorShortInfoResponse& WithCollectorName(Aws::String&& value) { SetCollectorName(std::move(value)); return *this;}

    /**
     * <p>The name of the Fleet Advisor collector.</p>
     */
    inline CollectorShortInfoResponse& WithCollectorName(const char* value) { SetCollectorName(value); return *this;}

  private:

    Aws::String m_collectorReferencedId;
    bool m_collectorReferencedIdHasBeenSet = false;

    Aws::String m_collectorName;
    bool m_collectorNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
