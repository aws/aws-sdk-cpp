/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
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
   * <p> Describes an elastic inference accelerator. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LaunchTemplateElasticInferenceAccelerator">AWS
   * API Reference</a></p>
   */
  class LaunchTemplateElasticInferenceAccelerator
  {
  public:
    AWS_EC2_API LaunchTemplateElasticInferenceAccelerator();
    AWS_EC2_API LaunchTemplateElasticInferenceAccelerator(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API LaunchTemplateElasticInferenceAccelerator& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p> The type of elastic inference accelerator. The possible values are
     * eia1.medium, eia1.large, and eia1.xlarge. </p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p> The type of elastic inference accelerator. The possible values are
     * eia1.medium, eia1.large, and eia1.xlarge. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p> The type of elastic inference accelerator. The possible values are
     * eia1.medium, eia1.large, and eia1.xlarge. </p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p> The type of elastic inference accelerator. The possible values are
     * eia1.medium, eia1.large, and eia1.xlarge. </p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p> The type of elastic inference accelerator. The possible values are
     * eia1.medium, eia1.large, and eia1.xlarge. </p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p> The type of elastic inference accelerator. The possible values are
     * eia1.medium, eia1.large, and eia1.xlarge. </p>
     */
    inline LaunchTemplateElasticInferenceAccelerator& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p> The type of elastic inference accelerator. The possible values are
     * eia1.medium, eia1.large, and eia1.xlarge. </p>
     */
    inline LaunchTemplateElasticInferenceAccelerator& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p> The type of elastic inference accelerator. The possible values are
     * eia1.medium, eia1.large, and eia1.xlarge. </p>
     */
    inline LaunchTemplateElasticInferenceAccelerator& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p> The number of elastic inference accelerators to attach to the instance. </p>
     * <p>Default: 1</p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p> The number of elastic inference accelerators to attach to the instance. </p>
     * <p>Default: 1</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p> The number of elastic inference accelerators to attach to the instance. </p>
     * <p>Default: 1</p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p> The number of elastic inference accelerators to attach to the instance. </p>
     * <p>Default: 1</p>
     */
    inline LaunchTemplateElasticInferenceAccelerator& WithCount(int value) { SetCount(value); return *this;}

  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    int m_count;
    bool m_countHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
