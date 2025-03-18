﻿/**
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
   * <p>Deprecated.</p>  <p>Amazon Elastic Graphics reached end of life on
   * January 8, 2024. For workloads that require graphics acceleration, we recommend
   * that you use Amazon EC2 G4ad, G4dn, or G5 instances.</p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ElasticGpuSpecificationResponse">AWS
   * API Reference</a></p>
   */
  class ElasticGpuSpecificationResponse
  {
  public:
    AWS_EC2_API ElasticGpuSpecificationResponse() = default;
    AWS_EC2_API ElasticGpuSpecificationResponse(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ElasticGpuSpecificationResponse& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Deprecated.</p>  <p>Amazon Elastic Graphics reached end of life on
     * January 8, 2024. For workloads that require graphics acceleration, we recommend
     * that you use Amazon EC2 G4ad, G4dn, or G5 instances.</p> 
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    ElasticGpuSpecificationResponse& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
