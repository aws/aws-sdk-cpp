/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LocationService
{
namespace Model
{
  class UpdateTrackerResult
  {
  public:
    AWS_LOCATIONSERVICE_API UpdateTrackerResult();
    AWS_LOCATIONSERVICE_API UpdateTrackerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API UpdateTrackerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the updated tracker resource. Used to
     * specify a resource across AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:tracker/ExampleTracker</code> </p> </li>
     * </ul>
     */
    inline const Aws::String& GetTrackerArn() const{ return m_trackerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the updated tracker resource. Used to
     * specify a resource across AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:tracker/ExampleTracker</code> </p> </li>
     * </ul>
     */
    inline void SetTrackerArn(const Aws::String& value) { m_trackerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the updated tracker resource. Used to
     * specify a resource across AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:tracker/ExampleTracker</code> </p> </li>
     * </ul>
     */
    inline void SetTrackerArn(Aws::String&& value) { m_trackerArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the updated tracker resource. Used to
     * specify a resource across AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:tracker/ExampleTracker</code> </p> </li>
     * </ul>
     */
    inline void SetTrackerArn(const char* value) { m_trackerArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the updated tracker resource. Used to
     * specify a resource across AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:tracker/ExampleTracker</code> </p> </li>
     * </ul>
     */
    inline UpdateTrackerResult& WithTrackerArn(const Aws::String& value) { SetTrackerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the updated tracker resource. Used to
     * specify a resource across AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:tracker/ExampleTracker</code> </p> </li>
     * </ul>
     */
    inline UpdateTrackerResult& WithTrackerArn(Aws::String&& value) { SetTrackerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the updated tracker resource. Used to
     * specify a resource across AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:tracker/ExampleTracker</code> </p> </li>
     * </ul>
     */
    inline UpdateTrackerResult& WithTrackerArn(const char* value) { SetTrackerArn(value); return *this;}


    /**
     * <p>The name of the updated tracker resource.</p>
     */
    inline const Aws::String& GetTrackerName() const{ return m_trackerName; }

    /**
     * <p>The name of the updated tracker resource.</p>
     */
    inline void SetTrackerName(const Aws::String& value) { m_trackerName = value; }

    /**
     * <p>The name of the updated tracker resource.</p>
     */
    inline void SetTrackerName(Aws::String&& value) { m_trackerName = std::move(value); }

    /**
     * <p>The name of the updated tracker resource.</p>
     */
    inline void SetTrackerName(const char* value) { m_trackerName.assign(value); }

    /**
     * <p>The name of the updated tracker resource.</p>
     */
    inline UpdateTrackerResult& WithTrackerName(const Aws::String& value) { SetTrackerName(value); return *this;}

    /**
     * <p>The name of the updated tracker resource.</p>
     */
    inline UpdateTrackerResult& WithTrackerName(Aws::String&& value) { SetTrackerName(std::move(value)); return *this;}

    /**
     * <p>The name of the updated tracker resource.</p>
     */
    inline UpdateTrackerResult& WithTrackerName(const char* value) { SetTrackerName(value); return *this;}


    /**
     * <p>The timestamp for when the tracker resource was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p>The timestamp for when the tracker resource was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTime = value; }

    /**
     * <p>The timestamp for when the tracker resource was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTime = std::move(value); }

    /**
     * <p>The timestamp for when the tracker resource was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline UpdateTrackerResult& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>The timestamp for when the tracker resource was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline UpdateTrackerResult& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}

  private:

    Aws::String m_trackerArn;

    Aws::String m_trackerName;

    Aws::Utils::DateTime m_updateTime;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
