/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/resource-groups/model/ResourceIdentifier.h>
#include <aws/resource-groups/model/ResourceStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ResourceGroups
{
namespace Model
{

  /**
   * <p>A structure returned by the <a>ListGroupResources</a> operation that contains
   * identity and group membership status information for one of the resources in the
   * group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/ListGroupResourcesItem">AWS
   * API Reference</a></p>
   */
  class ListGroupResourcesItem
  {
  public:
    AWS_RESOURCEGROUPS_API ListGroupResourcesItem();
    AWS_RESOURCEGROUPS_API ListGroupResourcesItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPS_API ListGroupResourcesItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const ResourceIdentifier& GetIdentifier() const{ return m_identifier; }

    
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    
    inline void SetIdentifier(const ResourceIdentifier& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    
    inline void SetIdentifier(ResourceIdentifier&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    
    inline ListGroupResourcesItem& WithIdentifier(const ResourceIdentifier& value) { SetIdentifier(value); return *this;}

    
    inline ListGroupResourcesItem& WithIdentifier(ResourceIdentifier&& value) { SetIdentifier(std::move(value)); return *this;}


    /**
     * <p>A structure that contains the status of this resource's membership in the
     * group.</p>  <p>This field is present in the response only if the group is
     * of type <code>AWS::EC2::HostManagement</code>.</p> 
     */
    inline const ResourceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>A structure that contains the status of this resource's membership in the
     * group.</p>  <p>This field is present in the response only if the group is
     * of type <code>AWS::EC2::HostManagement</code>.</p> 
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>A structure that contains the status of this resource's membership in the
     * group.</p>  <p>This field is present in the response only if the group is
     * of type <code>AWS::EC2::HostManagement</code>.</p> 
     */
    inline void SetStatus(const ResourceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>A structure that contains the status of this resource's membership in the
     * group.</p>  <p>This field is present in the response only if the group is
     * of type <code>AWS::EC2::HostManagement</code>.</p> 
     */
    inline void SetStatus(ResourceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>A structure that contains the status of this resource's membership in the
     * group.</p>  <p>This field is present in the response only if the group is
     * of type <code>AWS::EC2::HostManagement</code>.</p> 
     */
    inline ListGroupResourcesItem& WithStatus(const ResourceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>A structure that contains the status of this resource's membership in the
     * group.</p>  <p>This field is present in the response only if the group is
     * of type <code>AWS::EC2::HostManagement</code>.</p> 
     */
    inline ListGroupResourcesItem& WithStatus(ResourceStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    ResourceIdentifier m_identifier;
    bool m_identifierHasBeenSet = false;

    ResourceStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
