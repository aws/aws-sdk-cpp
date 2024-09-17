/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/appconfig/AppConfigRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace AppConfig
{
namespace Model
{

  /**
   */
  class ListExtensionAssociationsRequest : public AppConfigRequest
  {
  public:
    AWS_APPCONFIG_API ListExtensionAssociationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListExtensionAssociations"; }

    AWS_APPCONFIG_API Aws::String SerializePayload() const override;

    AWS_APPCONFIG_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ARN of an application, configuration profile, or environment.</p>
     */
    inline const Aws::String& GetResourceIdentifier() const{ return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    inline void SetResourceIdentifier(const Aws::String& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }
    inline void SetResourceIdentifier(Aws::String&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }
    inline void SetResourceIdentifier(const char* value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.assign(value); }
    inline ListExtensionAssociationsRequest& WithResourceIdentifier(const Aws::String& value) { SetResourceIdentifier(value); return *this;}
    inline ListExtensionAssociationsRequest& WithResourceIdentifier(Aws::String&& value) { SetResourceIdentifier(std::move(value)); return *this;}
    inline ListExtensionAssociationsRequest& WithResourceIdentifier(const char* value) { SetResourceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name, the ID, or the Amazon Resource Name (ARN) of the extension.</p>
     */
    inline const Aws::String& GetExtensionIdentifier() const{ return m_extensionIdentifier; }
    inline bool ExtensionIdentifierHasBeenSet() const { return m_extensionIdentifierHasBeenSet; }
    inline void SetExtensionIdentifier(const Aws::String& value) { m_extensionIdentifierHasBeenSet = true; m_extensionIdentifier = value; }
    inline void SetExtensionIdentifier(Aws::String&& value) { m_extensionIdentifierHasBeenSet = true; m_extensionIdentifier = std::move(value); }
    inline void SetExtensionIdentifier(const char* value) { m_extensionIdentifierHasBeenSet = true; m_extensionIdentifier.assign(value); }
    inline ListExtensionAssociationsRequest& WithExtensionIdentifier(const Aws::String& value) { SetExtensionIdentifier(value); return *this;}
    inline ListExtensionAssociationsRequest& WithExtensionIdentifier(Aws::String&& value) { SetExtensionIdentifier(std::move(value)); return *this;}
    inline ListExtensionAssociationsRequest& WithExtensionIdentifier(const char* value) { SetExtensionIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number for the extension defined in the association.</p>
     */
    inline int GetExtensionVersionNumber() const{ return m_extensionVersionNumber; }
    inline bool ExtensionVersionNumberHasBeenSet() const { return m_extensionVersionNumberHasBeenSet; }
    inline void SetExtensionVersionNumber(int value) { m_extensionVersionNumberHasBeenSet = true; m_extensionVersionNumber = value; }
    inline ListExtensionAssociationsRequest& WithExtensionVersionNumber(int value) { SetExtensionVersionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListExtensionAssociationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token to start the list. Use this token to get the next set of results or
     * pass null to get the first set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListExtensionAssociationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListExtensionAssociationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListExtensionAssociationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    Aws::String m_extensionIdentifier;
    bool m_extensionIdentifierHasBeenSet = false;

    int m_extensionVersionNumber;
    bool m_extensionVersionNumberHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
