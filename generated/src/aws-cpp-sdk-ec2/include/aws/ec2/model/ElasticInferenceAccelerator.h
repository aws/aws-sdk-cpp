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
   *  <p>Amazon Elastic Inference is no longer available.</p>  <p>
   * Describes an elastic inference accelerator. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ElasticInferenceAccelerator">AWS
   * API Reference</a></p>
   */
  class ElasticInferenceAccelerator
  {
  public:
    AWS_EC2_API ElasticInferenceAccelerator() = default;
    AWS_EC2_API ElasticInferenceAccelerator(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ElasticInferenceAccelerator& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p> The type of elastic inference accelerator. The possible values are
     * <code>eia1.medium</code>, <code>eia1.large</code>, <code>eia1.xlarge</code>,
     * <code>eia2.medium</code>, <code>eia2.large</code>, and <code>eia2.xlarge</code>.
     * </p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    ElasticInferenceAccelerator& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of elastic inference accelerators to attach to the instance. </p>
     * <p>Default: 1</p>
     */
    inline int GetCount() const { return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline ElasticInferenceAccelerator& WithCount(int value) { SetCount(value); return *this;}
    ///@}
  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    int m_count{0};
    bool m_countHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
