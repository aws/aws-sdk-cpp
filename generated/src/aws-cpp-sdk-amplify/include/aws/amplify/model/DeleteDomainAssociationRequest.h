/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/amplify/AmplifyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Amplify
{
namespace Model
{

  /**
   * <p> The request structure for the delete domain association request.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/DeleteDomainAssociationRequest">AWS
   * API Reference</a></p>
   */
  class DeleteDomainAssociationRequest : public AmplifyRequest
  {
  public:
    AWS_AMPLIFY_API DeleteDomainAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDomainAssociation"; }

    AWS_AMPLIFY_API Aws::String SerializePayload() const override;


    /**
     * <p> The unique id for an Amplify app. </p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }

    /**
     * <p> The unique id for an Amplify app. </p>
     */
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }

    /**
     * <p> The unique id for an Amplify app. </p>
     */
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }

    /**
     * <p> The unique id for an Amplify app. </p>
     */
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }

    /**
     * <p> The unique id for an Amplify app. </p>
     */
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }

    /**
     * <p> The unique id for an Amplify app. </p>
     */
    inline DeleteDomainAssociationRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p> The unique id for an Amplify app. </p>
     */
    inline DeleteDomainAssociationRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p> The unique id for an Amplify app. </p>
     */
    inline DeleteDomainAssociationRequest& WithAppId(const char* value) { SetAppId(value); return *this;}


    /**
     * <p> The name of the domain. </p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p> The name of the domain. </p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p> The name of the domain. </p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p> The name of the domain. </p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p> The name of the domain. </p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p> The name of the domain. </p>
     */
    inline DeleteDomainAssociationRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p> The name of the domain. </p>
     */
    inline DeleteDomainAssociationRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p> The name of the domain. </p>
     */
    inline DeleteDomainAssociationRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}

  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
