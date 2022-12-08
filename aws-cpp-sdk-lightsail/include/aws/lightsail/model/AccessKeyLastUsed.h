/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes the last time an access key was used.</p>  <p>This object
   * does not include data in the response of a <a
   * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_CreateBucketAccessKey.html">CreateBucketAccessKey</a>
   * action.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/AccessKeyLastUsed">AWS
   * API Reference</a></p>
   */
  class AccessKeyLastUsed
  {
  public:
    AWS_LIGHTSAIL_API AccessKeyLastUsed();
    AWS_LIGHTSAIL_API AccessKeyLastUsed(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API AccessKeyLastUsed& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The date and time when the access key was most recently used.</p> <p>This
     * value is null if the access key has not been used.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUsedDate() const{ return m_lastUsedDate; }

    /**
     * <p>The date and time when the access key was most recently used.</p> <p>This
     * value is null if the access key has not been used.</p>
     */
    inline bool LastUsedDateHasBeenSet() const { return m_lastUsedDateHasBeenSet; }

    /**
     * <p>The date and time when the access key was most recently used.</p> <p>This
     * value is null if the access key has not been used.</p>
     */
    inline void SetLastUsedDate(const Aws::Utils::DateTime& value) { m_lastUsedDateHasBeenSet = true; m_lastUsedDate = value; }

    /**
     * <p>The date and time when the access key was most recently used.</p> <p>This
     * value is null if the access key has not been used.</p>
     */
    inline void SetLastUsedDate(Aws::Utils::DateTime&& value) { m_lastUsedDateHasBeenSet = true; m_lastUsedDate = std::move(value); }

    /**
     * <p>The date and time when the access key was most recently used.</p> <p>This
     * value is null if the access key has not been used.</p>
     */
    inline AccessKeyLastUsed& WithLastUsedDate(const Aws::Utils::DateTime& value) { SetLastUsedDate(value); return *this;}

    /**
     * <p>The date and time when the access key was most recently used.</p> <p>This
     * value is null if the access key has not been used.</p>
     */
    inline AccessKeyLastUsed& WithLastUsedDate(Aws::Utils::DateTime&& value) { SetLastUsedDate(std::move(value)); return *this;}


    /**
     * <p>The Amazon Web Services Region where this access key was most recently
     * used.</p> <p>This value is <code>N/A</code> if the access key has not been
     * used.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The Amazon Web Services Region where this access key was most recently
     * used.</p> <p>This value is <code>N/A</code> if the access key has not been
     * used.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region where this access key was most recently
     * used.</p> <p>This value is <code>N/A</code> if the access key has not been
     * used.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The Amazon Web Services Region where this access key was most recently
     * used.</p> <p>This value is <code>N/A</code> if the access key has not been
     * used.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The Amazon Web Services Region where this access key was most recently
     * used.</p> <p>This value is <code>N/A</code> if the access key has not been
     * used.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The Amazon Web Services Region where this access key was most recently
     * used.</p> <p>This value is <code>N/A</code> if the access key has not been
     * used.</p>
     */
    inline AccessKeyLastUsed& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region where this access key was most recently
     * used.</p> <p>This value is <code>N/A</code> if the access key has not been
     * used.</p>
     */
    inline AccessKeyLastUsed& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region where this access key was most recently
     * used.</p> <p>This value is <code>N/A</code> if the access key has not been
     * used.</p>
     */
    inline AccessKeyLastUsed& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The name of the Amazon Web Services service with which this access key was
     * most recently used.</p> <p>This value is <code>N/A</code> if the access key has
     * not been used.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The name of the Amazon Web Services service with which this access key was
     * most recently used.</p> <p>This value is <code>N/A</code> if the access key has
     * not been used.</p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>The name of the Amazon Web Services service with which this access key was
     * most recently used.</p> <p>This value is <code>N/A</code> if the access key has
     * not been used.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The name of the Amazon Web Services service with which this access key was
     * most recently used.</p> <p>This value is <code>N/A</code> if the access key has
     * not been used.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The name of the Amazon Web Services service with which this access key was
     * most recently used.</p> <p>This value is <code>N/A</code> if the access key has
     * not been used.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The name of the Amazon Web Services service with which this access key was
     * most recently used.</p> <p>This value is <code>N/A</code> if the access key has
     * not been used.</p>
     */
    inline AccessKeyLastUsed& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the Amazon Web Services service with which this access key was
     * most recently used.</p> <p>This value is <code>N/A</code> if the access key has
     * not been used.</p>
     */
    inline AccessKeyLastUsed& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Web Services service with which this access key was
     * most recently used.</p> <p>This value is <code>N/A</code> if the access key has
     * not been used.</p>
     */
    inline AccessKeyLastUsed& WithServiceName(const char* value) { SetServiceName(value); return *this;}

  private:

    Aws::Utils::DateTime m_lastUsedDate;
    bool m_lastUsedDateHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
