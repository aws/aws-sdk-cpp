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
   * <p>Describes an potential intermediate component of a feasible
   * path.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AlternatePathHint">AWS
   * API Reference</a></p>
   */
  class AlternatePathHint
  {
  public:
    AWS_EC2_API AlternatePathHint();
    AWS_EC2_API AlternatePathHint(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API AlternatePathHint& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the component.</p>
     */
    inline const Aws::String& GetComponentId() const{ return m_componentId; }

    /**
     * <p>The ID of the component.</p>
     */
    inline bool ComponentIdHasBeenSet() const { return m_componentIdHasBeenSet; }

    /**
     * <p>The ID of the component.</p>
     */
    inline void SetComponentId(const Aws::String& value) { m_componentIdHasBeenSet = true; m_componentId = value; }

    /**
     * <p>The ID of the component.</p>
     */
    inline void SetComponentId(Aws::String&& value) { m_componentIdHasBeenSet = true; m_componentId = std::move(value); }

    /**
     * <p>The ID of the component.</p>
     */
    inline void SetComponentId(const char* value) { m_componentIdHasBeenSet = true; m_componentId.assign(value); }

    /**
     * <p>The ID of the component.</p>
     */
    inline AlternatePathHint& WithComponentId(const Aws::String& value) { SetComponentId(value); return *this;}

    /**
     * <p>The ID of the component.</p>
     */
    inline AlternatePathHint& WithComponentId(Aws::String&& value) { SetComponentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the component.</p>
     */
    inline AlternatePathHint& WithComponentId(const char* value) { SetComponentId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the component.</p>
     */
    inline const Aws::String& GetComponentArn() const{ return m_componentArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the component.</p>
     */
    inline bool ComponentArnHasBeenSet() const { return m_componentArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the component.</p>
     */
    inline void SetComponentArn(const Aws::String& value) { m_componentArnHasBeenSet = true; m_componentArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the component.</p>
     */
    inline void SetComponentArn(Aws::String&& value) { m_componentArnHasBeenSet = true; m_componentArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the component.</p>
     */
    inline void SetComponentArn(const char* value) { m_componentArnHasBeenSet = true; m_componentArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the component.</p>
     */
    inline AlternatePathHint& WithComponentArn(const Aws::String& value) { SetComponentArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the component.</p>
     */
    inline AlternatePathHint& WithComponentArn(Aws::String&& value) { SetComponentArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the component.</p>
     */
    inline AlternatePathHint& WithComponentArn(const char* value) { SetComponentArn(value); return *this;}

  private:

    Aws::String m_componentId;
    bool m_componentIdHasBeenSet = false;

    Aws::String m_componentArn;
    bool m_componentArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
