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
   * <p>Describes an elastic GPU.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ElasticGpuSpecificationResponse">AWS
   * API Reference</a></p>
   */
  class ElasticGpuSpecificationResponse
  {
  public:
    AWS_EC2_API ElasticGpuSpecificationResponse();
    AWS_EC2_API ElasticGpuSpecificationResponse(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ElasticGpuSpecificationResponse& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The elastic GPU type.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The elastic GPU type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The elastic GPU type.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The elastic GPU type.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The elastic GPU type.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The elastic GPU type.</p>
     */
    inline ElasticGpuSpecificationResponse& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The elastic GPU type.</p>
     */
    inline ElasticGpuSpecificationResponse& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The elastic GPU type.</p>
     */
    inline ElasticGpuSpecificationResponse& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
