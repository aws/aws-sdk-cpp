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
    AWS_LIGHTSAIL_API AccessKeyLastUsed() = default;
    AWS_LIGHTSAIL_API AccessKeyLastUsed(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API AccessKeyLastUsed& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date and time when the access key was most recently used.</p> <p>This
     * value is null if the access key has not been used.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUsedDate() const { return m_lastUsedDate; }
    inline bool LastUsedDateHasBeenSet() const { return m_lastUsedDateHasBeenSet; }
    template<typename LastUsedDateT = Aws::Utils::DateTime>
    void SetLastUsedDate(LastUsedDateT&& value) { m_lastUsedDateHasBeenSet = true; m_lastUsedDate = std::forward<LastUsedDateT>(value); }
    template<typename LastUsedDateT = Aws::Utils::DateTime>
    AccessKeyLastUsed& WithLastUsedDate(LastUsedDateT&& value) { SetLastUsedDate(std::forward<LastUsedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where this access key was most recently
     * used.</p> <p>This value is <code>N/A</code> if the access key has not been
     * used.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    AccessKeyLastUsed& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Web Services service with which this access key was
     * most recently used.</p> <p>This value is <code>N/A</code> if the access key has
     * not been used.</p>
     */
    inline const Aws::String& GetServiceName() const { return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    template<typename ServiceNameT = Aws::String>
    void SetServiceName(ServiceNameT&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::forward<ServiceNameT>(value); }
    template<typename ServiceNameT = Aws::String>
    AccessKeyLastUsed& WithServiceName(ServiceNameT&& value) { SetServiceName(std::forward<ServiceNameT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_lastUsedDate{};
    bool m_lastUsedDateHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
