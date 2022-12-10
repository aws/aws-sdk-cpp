/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateTrackerResult
  {
  public:
    AWS_LOCATIONSERVICE_API CreateTrackerResult();
    AWS_LOCATIONSERVICE_API CreateTrackerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API CreateTrackerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The timestamp for when the tracker resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The timestamp for when the tracker resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTime = value; }

    /**
     * <p>The timestamp for when the tracker resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTime = std::move(value); }

    /**
     * <p>The timestamp for when the tracker resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline CreateTrackerResult& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The timestamp for when the tracker resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline CreateTrackerResult& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the tracker resource. Used when you need
     * to specify a resource across all AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:tracker/ExampleTracker</code> </p> </li>
     * </ul>
     */
    inline const Aws::String& GetTrackerArn() const{ return m_trackerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the tracker resource. Used when you need
     * to specify a resource across all AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:tracker/ExampleTracker</code> </p> </li>
     * </ul>
     */
    inline void SetTrackerArn(const Aws::String& value) { m_trackerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the tracker resource. Used when you need
     * to specify a resource across all AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:tracker/ExampleTracker</code> </p> </li>
     * </ul>
     */
    inline void SetTrackerArn(Aws::String&& value) { m_trackerArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the tracker resource. Used when you need
     * to specify a resource across all AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:tracker/ExampleTracker</code> </p> </li>
     * </ul>
     */
    inline void SetTrackerArn(const char* value) { m_trackerArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the tracker resource. Used when you need
     * to specify a resource across all AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:tracker/ExampleTracker</code> </p> </li>
     * </ul>
     */
    inline CreateTrackerResult& WithTrackerArn(const Aws::String& value) { SetTrackerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the tracker resource. Used when you need
     * to specify a resource across all AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:tracker/ExampleTracker</code> </p> </li>
     * </ul>
     */
    inline CreateTrackerResult& WithTrackerArn(Aws::String&& value) { SetTrackerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the tracker resource. Used when you need
     * to specify a resource across all AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:tracker/ExampleTracker</code> </p> </li>
     * </ul>
     */
    inline CreateTrackerResult& WithTrackerArn(const char* value) { SetTrackerArn(value); return *this;}


    /**
     * <p>The name of the tracker resource.</p>
     */
    inline const Aws::String& GetTrackerName() const{ return m_trackerName; }

    /**
     * <p>The name of the tracker resource.</p>
     */
    inline void SetTrackerName(const Aws::String& value) { m_trackerName = value; }

    /**
     * <p>The name of the tracker resource.</p>
     */
    inline void SetTrackerName(Aws::String&& value) { m_trackerName = std::move(value); }

    /**
     * <p>The name of the tracker resource.</p>
     */
    inline void SetTrackerName(const char* value) { m_trackerName.assign(value); }

    /**
     * <p>The name of the tracker resource.</p>
     */
    inline CreateTrackerResult& WithTrackerName(const Aws::String& value) { SetTrackerName(value); return *this;}

    /**
     * <p>The name of the tracker resource.</p>
     */
    inline CreateTrackerResult& WithTrackerName(Aws::String&& value) { SetTrackerName(std::move(value)); return *this;}

    /**
     * <p>The name of the tracker resource.</p>
     */
    inline CreateTrackerResult& WithTrackerName(const char* value) { SetTrackerName(value); return *this;}

  private:

    Aws::Utils::DateTime m_createTime;

    Aws::String m_trackerArn;

    Aws::String m_trackerName;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
