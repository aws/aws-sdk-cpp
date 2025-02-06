/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/cloudformation/model/ResourceLocation.h>
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
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>Specifies the current source of the resource and the destination of where it
   * will be moved to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ResourceMapping">AWS
   * API Reference</a></p>
   */
  class ResourceMapping
  {
  public:
    AWS_CLOUDFORMATION_API ResourceMapping();
    AWS_CLOUDFORMATION_API ResourceMapping(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API ResourceMapping& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The source stack <code>StackName</code> and <code>LogicalResourceId</code>
     * for the resource being refactored.</p>
     */
    inline const ResourceLocation& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const ResourceLocation& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(ResourceLocation&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline ResourceMapping& WithSource(const ResourceLocation& value) { SetSource(value); return *this;}
    inline ResourceMapping& WithSource(ResourceLocation&& value) { SetSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination stack <code>StackName</code> and
     * <code>LogicalResourceId</code> for the resource being refactored.</p>
     */
    inline const ResourceLocation& GetDestination() const{ return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    inline void SetDestination(const ResourceLocation& value) { m_destinationHasBeenSet = true; m_destination = value; }
    inline void SetDestination(ResourceLocation&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }
    inline ResourceMapping& WithDestination(const ResourceLocation& value) { SetDestination(value); return *this;}
    inline ResourceMapping& WithDestination(ResourceLocation&& value) { SetDestination(std::move(value)); return *this;}
    ///@}
  private:

    ResourceLocation m_source;
    bool m_sourceHasBeenSet = false;

    ResourceLocation m_destination;
    bool m_destinationHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
