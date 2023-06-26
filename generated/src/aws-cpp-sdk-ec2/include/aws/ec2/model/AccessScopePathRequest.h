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
    AWS_EC2_API AccessScopePathRequest();
    AWS_EC2_API AccessScopePathRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API AccessScopePathRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The source.</p>
     */
    inline const PathStatementRequest& GetSource() const{ return m_source; }

    /**
     * <p>The source.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The source.</p>
     */
    inline void SetSource(const PathStatementRequest& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The source.</p>
     */
    inline void SetSource(PathStatementRequest&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The source.</p>
     */
    inline AccessScopePathRequest& WithSource(const PathStatementRequest& value) { SetSource(value); return *this;}

    /**
     * <p>The source.</p>
     */
    inline AccessScopePathRequest& WithSource(PathStatementRequest&& value) { SetSource(std::move(value)); return *this;}


    /**
     * <p>The destination.</p>
     */
    inline const PathStatementRequest& GetDestination() const{ return m_destination; }

    /**
     * <p>The destination.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The destination.</p>
     */
    inline void SetDestination(const PathStatementRequest& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The destination.</p>
     */
    inline void SetDestination(PathStatementRequest&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>The destination.</p>
     */
    inline AccessScopePathRequest& WithDestination(const PathStatementRequest& value) { SetDestination(value); return *this;}

    /**
     * <p>The destination.</p>
     */
    inline AccessScopePathRequest& WithDestination(PathStatementRequest&& value) { SetDestination(std::move(value)); return *this;}


    /**
     * <p>The through resources.</p>
     */
    inline const Aws::Vector<ThroughResourcesStatementRequest>& GetThroughResources() const{ return m_throughResources; }

    /**
     * <p>The through resources.</p>
     */
    inline bool ThroughResourcesHasBeenSet() const { return m_throughResourcesHasBeenSet; }

    /**
     * <p>The through resources.</p>
     */
    inline void SetThroughResources(const Aws::Vector<ThroughResourcesStatementRequest>& value) { m_throughResourcesHasBeenSet = true; m_throughResources = value; }

    /**
     * <p>The through resources.</p>
     */
    inline void SetThroughResources(Aws::Vector<ThroughResourcesStatementRequest>&& value) { m_throughResourcesHasBeenSet = true; m_throughResources = std::move(value); }

    /**
     * <p>The through resources.</p>
     */
    inline AccessScopePathRequest& WithThroughResources(const Aws::Vector<ThroughResourcesStatementRequest>& value) { SetThroughResources(value); return *this;}

    /**
     * <p>The through resources.</p>
     */
    inline AccessScopePathRequest& WithThroughResources(Aws::Vector<ThroughResourcesStatementRequest>&& value) { SetThroughResources(std::move(value)); return *this;}

    /**
     * <p>The through resources.</p>
     */
    inline AccessScopePathRequest& AddThroughResources(const ThroughResourcesStatementRequest& value) { m_throughResourcesHasBeenSet = true; m_throughResources.push_back(value); return *this; }

    /**
     * <p>The through resources.</p>
     */
    inline AccessScopePathRequest& AddThroughResources(ThroughResourcesStatementRequest&& value) { m_throughResourcesHasBeenSet = true; m_throughResources.push_back(std::move(value)); return *this; }

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
