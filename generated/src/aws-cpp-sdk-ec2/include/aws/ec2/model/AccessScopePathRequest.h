/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/PathStatementRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ThroughResourcesStatementRequest.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AccessScopePathRequest">AWS
   * API Reference</a></p>
   */
  class AccessScopePathRequest
  {
  public:
    AWS_EC2_API AccessScopePathRequest() = default;
    AWS_EC2_API AccessScopePathRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API AccessScopePathRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The source.</p>
     */
    inline const PathStatementRequest& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = PathStatementRequest>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = PathStatementRequest>
    AccessScopePathRequest& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination.</p>
     */
    inline const PathStatementRequest& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = PathStatementRequest>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = PathStatementRequest>
    AccessScopePathRequest& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The through resources.</p>
     */
    inline const Aws::Vector<ThroughResourcesStatementRequest>& GetThroughResources() const { return m_throughResources; }
    inline bool ThroughResourcesHasBeenSet() const { return m_throughResourcesHasBeenSet; }
    template<typename ThroughResourcesT = Aws::Vector<ThroughResourcesStatementRequest>>
    void SetThroughResources(ThroughResourcesT&& value) { m_throughResourcesHasBeenSet = true; m_throughResources = std::forward<ThroughResourcesT>(value); }
    template<typename ThroughResourcesT = Aws::Vector<ThroughResourcesStatementRequest>>
    AccessScopePathRequest& WithThroughResources(ThroughResourcesT&& value) { SetThroughResources(std::forward<ThroughResourcesT>(value)); return *this;}
    template<typename ThroughResourcesT = ThroughResourcesStatementRequest>
    AccessScopePathRequest& AddThroughResources(ThroughResourcesT&& value) { m_throughResourcesHasBeenSet = true; m_throughResources.emplace_back(std::forward<ThroughResourcesT>(value)); return *this; }
    ///@}
  private:

    PathStatementRequest m_source;
    bool m_sourceHasBeenSet = false;

    PathStatementRequest m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::Vector<ThroughResourcesStatementRequest> m_throughResources;
    bool m_throughResourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
