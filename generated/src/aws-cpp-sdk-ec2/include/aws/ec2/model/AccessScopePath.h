/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/PathStatement.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ThroughResourcesStatement.h>
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
   * <p>Describes a path.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AccessScopePath">AWS
   * API Reference</a></p>
   */
  class AccessScopePath
  {
  public:
    AWS_EC2_API AccessScopePath();
    AWS_EC2_API AccessScopePath(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API AccessScopePath& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The source.</p>
     */
    inline const PathStatement& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const PathStatement& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(PathStatement&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline AccessScopePath& WithSource(const PathStatement& value) { SetSource(value); return *this;}
    inline AccessScopePath& WithSource(PathStatement&& value) { SetSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination.</p>
     */
    inline const PathStatement& GetDestination() const{ return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    inline void SetDestination(const PathStatement& value) { m_destinationHasBeenSet = true; m_destination = value; }
    inline void SetDestination(PathStatement&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }
    inline AccessScopePath& WithDestination(const PathStatement& value) { SetDestination(value); return *this;}
    inline AccessScopePath& WithDestination(PathStatement&& value) { SetDestination(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The through resources.</p>
     */
    inline const Aws::Vector<ThroughResourcesStatement>& GetThroughResources() const{ return m_throughResources; }
    inline bool ThroughResourcesHasBeenSet() const { return m_throughResourcesHasBeenSet; }
    inline void SetThroughResources(const Aws::Vector<ThroughResourcesStatement>& value) { m_throughResourcesHasBeenSet = true; m_throughResources = value; }
    inline void SetThroughResources(Aws::Vector<ThroughResourcesStatement>&& value) { m_throughResourcesHasBeenSet = true; m_throughResources = std::move(value); }
    inline AccessScopePath& WithThroughResources(const Aws::Vector<ThroughResourcesStatement>& value) { SetThroughResources(value); return *this;}
    inline AccessScopePath& WithThroughResources(Aws::Vector<ThroughResourcesStatement>&& value) { SetThroughResources(std::move(value)); return *this;}
    inline AccessScopePath& AddThroughResources(const ThroughResourcesStatement& value) { m_throughResourcesHasBeenSet = true; m_throughResources.push_back(value); return *this; }
    inline AccessScopePath& AddThroughResources(ThroughResourcesStatement&& value) { m_throughResourcesHasBeenSet = true; m_throughResources.push_back(std::move(value)); return *this; }
    ///@}
  private:

    PathStatement m_source;
    bool m_sourceHasBeenSet = false;

    PathStatement m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::Vector<ThroughResourcesStatement> m_throughResources;
    bool m_throughResourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
