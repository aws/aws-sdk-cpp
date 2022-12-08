/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeAssociationRequest : public SSMRequest
  {
  public:
    AWS_SSM_API DescribeAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAssociation"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the SSM document.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the SSM document.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the SSM document.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the SSM document.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the SSM document.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the SSM document.</p>
     */
    inline DescribeAssociationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the SSM document.</p>
     */
    inline DescribeAssociationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the SSM document.</p>
     */
    inline DescribeAssociationRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The managed node ID.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The managed node ID.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The managed node ID.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The managed node ID.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The managed node ID.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The managed node ID.</p>
     */
    inline DescribeAssociationRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The managed node ID.</p>
     */
    inline DescribeAssociationRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The managed node ID.</p>
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
     * To view a list of all associations for a managed node, use
     * <a>ListAssociations</a>. To get a list of versions for a specific association,
     * use <a>ListAssociationVersions</a>. </p>
     */
    inline const Aws::String& GetAssociationVersion() const{ return m_associationVersion; }

    /**
     * <p>Specify the association version to retrieve. To view the latest version,
     * either specify <code>$LATEST</code> for this parameter, or omit this parameter.
     * To view a list of all associations for a managed node, use
     * <a>ListAssociations</a>. To get a list of versions for a specific association,
     * use <a>ListAssociationVersions</a>. </p>
     */
    inline bool AssociationVersionHasBeenSet() const { return m_associationVersionHasBeenSet; }

    /**
     * <p>Specify the association version to retrieve. To view the latest version,
     * either specify <code>$LATEST</code> for this parameter, or omit this parameter.
     * To view a list of all associations for a managed node, use
     * <a>ListAssociations</a>. To get a list of versions for a specific association,
     * use <a>ListAssociationVersions</a>. </p>
     */
    inline void SetAssociationVersion(const Aws::String& value) { m_associationVersionHasBeenSet = true; m_associationVersion = value; }

    /**
     * <p>Specify the association version to retrieve. To view the latest version,
     * either specify <code>$LATEST</code> for this parameter, or omit this parameter.
     * To view a list of all associations for a managed node, use
     * <a>ListAssociations</a>. To get a list of versions for a specific association,
     * use <a>ListAssociationVersions</a>. </p>
     */
    inline void SetAssociationVersion(Aws::String&& value) { m_associationVersionHasBeenSet = true; m_associationVersion = std::move(value); }

    /**
     * <p>Specify the association version to retrieve. To view the latest version,
     * either specify <code>$LATEST</code> for this parameter, or omit this parameter.
     * To view a list of all associations for a managed node, use
     * <a>ListAssociations</a>. To get a list of versions for a specific association,
     * use <a>ListAssociationVersions</a>. </p>
     */
    inline void SetAssociationVersion(const char* value) { m_associationVersionHasBeenSet = true; m_associationVersion.assign(value); }

    /**
     * <p>Specify the association version to retrieve. To view the latest version,
     * either specify <code>$LATEST</code> for this parameter, or omit this parameter.
     * To view a list of all associations for a managed node, use
     * <a>ListAssociations</a>. To get a list of versions for a specific association,
     * use <a>ListAssociationVersions</a>. </p>
     */
    inline DescribeAssociationRequest& WithAssociationVersion(const Aws::String& value) { SetAssociationVersion(value); return *this;}

    /**
     * <p>Specify the association version to retrieve. To view the latest version,
     * either specify <code>$LATEST</code> for this parameter, or omit this parameter.
     * To view a list of all associations for a managed node, use
     * <a>ListAssociations</a>. To get a list of versions for a specific association,
     * use <a>ListAssociationVersions</a>. </p>
     */
    inline DescribeAssociationRequest& WithAssociationVersion(Aws::String&& value) { SetAssociationVersion(std::move(value)); return *this;}

    /**
     * <p>Specify the association version to retrieve. To view the latest version,
     * either specify <code>$LATEST</code> for this parameter, or omit this parameter.
     * To view a list of all associations for a managed node, use
     * <a>ListAssociations</a>. To get a list of versions for a specific association,
     * use <a>ListAssociationVersions</a>. </p>
     */
    inline DescribeAssociationRequest& WithAssociationVersion(const char* value) { SetAssociationVersion(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;

    Aws::String m_associationVersion;
    bool m_associationVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
