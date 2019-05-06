/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API DescribeAssociationRequest : public SSMRequest
  {
  public:
    DescribeAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAssociation"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the Systems Manager document.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Systems Manager document.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Systems Manager document.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Systems Manager document.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Systems Manager document.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Systems Manager document.</p>
     */
    inline DescribeAssociationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Systems Manager document.</p>
     */
    inline DescribeAssociationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Systems Manager document.</p>
     */
    inline DescribeAssociationRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The instance ID.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The instance ID.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The instance ID.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The instance ID.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The instance ID.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The instance ID.</p>
     */
    inline DescribeAssociationRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The instance ID.</p>
     */
    inline DescribeAssociationRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The instance ID.</p>
     */
    inline DescribeAssociationRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The association ID for which you want information.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }

    /**
     * <p>The association ID for which you want information.</p>
     */
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }

    /**
     * <p>The association ID for which you want information.</p>
     */
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }

    /**
     * <p>The association ID for which you want information.</p>
     */
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }

    /**
     * <p>The association ID for which you want information.</p>
     */
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }

    /**
     * <p>The association ID for which you want information.</p>
     */
    inline DescribeAssociationRequest& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}

    /**
     * <p>The association ID for which you want information.</p>
     */
    inline DescribeAssociationRequest& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}

    /**
     * <p>The association ID for which you want information.</p>
     */
    inline DescribeAssociationRequest& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}


    /**
     * <p>Specify the association version to retrieve. To view the latest version,
     * either specify <code>$LATEST</code> for this parameter, or omit this parameter.
     * To view a list of all associations for an instance, use <a>ListAssociations</a>.
     * To get a list of versions for a specific association, use
     * <a>ListAssociationVersions</a>. </p>
     */
    inline const Aws::String& GetAssociationVersion() const{ return m_associationVersion; }

    /**
     * <p>Specify the association version to retrieve. To view the latest version,
     * either specify <code>$LATEST</code> for this parameter, or omit this parameter.
     * To view a list of all associations for an instance, use <a>ListAssociations</a>.
     * To get a list of versions for a specific association, use
     * <a>ListAssociationVersions</a>. </p>
     */
    inline bool AssociationVersionHasBeenSet() const { return m_associationVersionHasBeenSet; }

    /**
     * <p>Specify the association version to retrieve. To view the latest version,
     * either specify <code>$LATEST</code> for this parameter, or omit this parameter.
     * To view a list of all associations for an instance, use <a>ListAssociations</a>.
     * To get a list of versions for a specific association, use
     * <a>ListAssociationVersions</a>. </p>
     */
    inline void SetAssociationVersion(const Aws::String& value) { m_associationVersionHasBeenSet = true; m_associationVersion = value; }

    /**
     * <p>Specify the association version to retrieve. To view the latest version,
     * either specify <code>$LATEST</code> for this parameter, or omit this parameter.
     * To view a list of all associations for an instance, use <a>ListAssociations</a>.
     * To get a list of versions for a specific association, use
     * <a>ListAssociationVersions</a>. </p>
     */
    inline void SetAssociationVersion(Aws::String&& value) { m_associationVersionHasBeenSet = true; m_associationVersion = std::move(value); }

    /**
     * <p>Specify the association version to retrieve. To view the latest version,
     * either specify <code>$LATEST</code> for this parameter, or omit this parameter.
     * To view a list of all associations for an instance, use <a>ListAssociations</a>.
     * To get a list of versions for a specific association, use
     * <a>ListAssociationVersions</a>. </p>
     */
    inline void SetAssociationVersion(const char* value) { m_associationVersionHasBeenSet = true; m_associationVersion.assign(value); }

    /**
     * <p>Specify the association version to retrieve. To view the latest version,
     * either specify <code>$LATEST</code> for this parameter, or omit this parameter.
     * To view a list of all associations for an instance, use <a>ListAssociations</a>.
     * To get a list of versions for a specific association, use
     * <a>ListAssociationVersions</a>. </p>
     */
    inline DescribeAssociationRequest& WithAssociationVersion(const Aws::String& value) { SetAssociationVersion(value); return *this;}

    /**
     * <p>Specify the association version to retrieve. To view the latest version,
     * either specify <code>$LATEST</code> for this parameter, or omit this parameter.
     * To view a list of all associations for an instance, use <a>ListAssociations</a>.
     * To get a list of versions for a specific association, use
     * <a>ListAssociationVersions</a>. </p>
     */
    inline DescribeAssociationRequest& WithAssociationVersion(Aws::String&& value) { SetAssociationVersion(std::move(value)); return *this;}

    /**
     * <p>Specify the association version to retrieve. To view the latest version,
     * either specify <code>$LATEST</code> for this parameter, or omit this parameter.
     * To view a list of all associations for an instance, use <a>ListAssociations</a>.
     * To get a list of versions for a specific association, use
     * <a>ListAssociationVersions</a>. </p>
     */
    inline DescribeAssociationRequest& WithAssociationVersion(const char* value) { SetAssociationVersion(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet;

    Aws::String m_associationVersion;
    bool m_associationVersionHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
