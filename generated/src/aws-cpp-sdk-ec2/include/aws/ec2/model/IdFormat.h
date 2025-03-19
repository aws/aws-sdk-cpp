/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the ID format for a resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IdFormat">AWS API
   * Reference</a></p>
   */
  class IdFormat
  {
  public:
    AWS_EC2_API IdFormat() = default;
    AWS_EC2_API IdFormat(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API IdFormat& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The date in UTC at which you are permanently switched over to using longer
     * IDs. If a deadline is not yet available for this resource type, this field is
     * not returned.</p>
     */
    inline const Aws::Utils::DateTime& GetDeadline() const { return m_deadline; }
    inline bool DeadlineHasBeenSet() const { return m_deadlineHasBeenSet; }
    template<typename DeadlineT = Aws::Utils::DateTime>
    void SetDeadline(DeadlineT&& value) { m_deadlineHasBeenSet = true; m_deadline = std::forward<DeadlineT>(value); }
    template<typename DeadlineT = Aws::Utils::DateTime>
    IdFormat& WithDeadline(DeadlineT&& value) { SetDeadline(std::forward<DeadlineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource.</p>
     */
    inline const Aws::String& GetResource() const { return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    template<typename ResourceT = Aws::String>
    void SetResource(ResourceT&& value) { m_resourceHasBeenSet = true; m_resource = std::forward<ResourceT>(value); }
    template<typename ResourceT = Aws::String>
    IdFormat& WithResource(ResourceT&& value) { SetResource(std::forward<ResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether longer IDs (17-character IDs) are enabled for the
     * resource.</p>
     */
    inline bool GetUseLongIds() const { return m_useLongIds; }
    inline bool UseLongIdsHasBeenSet() const { return m_useLongIdsHasBeenSet; }
    inline void SetUseLongIds(bool value) { m_useLongIdsHasBeenSet = true; m_useLongIds = value; }
    inline IdFormat& WithUseLongIds(bool value) { SetUseLongIds(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_deadline{};
    bool m_deadlineHasBeenSet = false;

    Aws::String m_resource;
    bool m_resourceHasBeenSet = false;

    bool m_useLongIds{false};
    bool m_useLongIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
