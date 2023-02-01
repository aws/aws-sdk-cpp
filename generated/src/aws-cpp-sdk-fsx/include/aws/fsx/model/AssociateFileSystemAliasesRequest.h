/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/FSxRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace FSx
{
namespace Model
{

  /**
   * <p>The request object specifying one or more DNS alias names to associate with
   * an Amazon FSx for Windows File Server file system.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/AssociateFileSystemAliasesRequest">AWS
   * API Reference</a></p>
   */
  class AssociateFileSystemAliasesRequest : public FSxRequest
  {
  public:
    AWS_FSX_API AssociateFileSystemAliasesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateFileSystemAliases"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    
    inline AssociateFileSystemAliasesRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    
    inline AssociateFileSystemAliasesRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    
    inline AssociateFileSystemAliasesRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>Specifies the file system with which you want to associate one or more DNS
     * aliases.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    /**
     * <p>Specifies the file system with which you want to associate one or more DNS
     * aliases.</p>
     */
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }

    /**
     * <p>Specifies the file system with which you want to associate one or more DNS
     * aliases.</p>
     */
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    /**
     * <p>Specifies the file system with which you want to associate one or more DNS
     * aliases.</p>
     */
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::move(value); }

    /**
     * <p>Specifies the file system with which you want to associate one or more DNS
     * aliases.</p>
     */
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }

    /**
     * <p>Specifies the file system with which you want to associate one or more DNS
     * aliases.</p>
     */
    inline AssociateFileSystemAliasesRequest& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>Specifies the file system with which you want to associate one or more DNS
     * aliases.</p>
     */
    inline AssociateFileSystemAliasesRequest& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}

    /**
     * <p>Specifies the file system with which you want to associate one or more DNS
     * aliases.</p>
     */
    inline AssociateFileSystemAliasesRequest& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}


    /**
     * <p>An array of one or more DNS alias names to associate with the file system.
     * The alias name has to comply with the following formatting requirements:</p>
     * <ul> <li> <p>Formatted as a fully-qualified domain name (FQDN), <i>
     * <code>hostname.domain</code> </i>, for example,
     * <code>accounting.corp.example.com</code>.</p> </li> <li> <p>Can contain
     * alphanumeric characters and the hyphen (-).</p> </li> <li> <p>Cannot start or
     * end with a hyphen.</p> </li> <li> <p>Can start with a numeric.</p> </li> </ul>
     * <p>For DNS alias names, Amazon FSx stores alphabetic characters as lowercase
     * letters (a-z), regardless of how you specify them: as uppercase letters,
     * lowercase letters, or the corresponding letters in escape codes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAliases() const{ return m_aliases; }

    /**
     * <p>An array of one or more DNS alias names to associate with the file system.
     * The alias name has to comply with the following formatting requirements:</p>
     * <ul> <li> <p>Formatted as a fully-qualified domain name (FQDN), <i>
     * <code>hostname.domain</code> </i>, for example,
     * <code>accounting.corp.example.com</code>.</p> </li> <li> <p>Can contain
     * alphanumeric characters and the hyphen (-).</p> </li> <li> <p>Cannot start or
     * end with a hyphen.</p> </li> <li> <p>Can start with a numeric.</p> </li> </ul>
     * <p>For DNS alias names, Amazon FSx stores alphabetic characters as lowercase
     * letters (a-z), regardless of how you specify them: as uppercase letters,
     * lowercase letters, or the corresponding letters in escape codes.</p>
     */
    inline bool AliasesHasBeenSet() const { return m_aliasesHasBeenSet; }

    /**
     * <p>An array of one or more DNS alias names to associate with the file system.
     * The alias name has to comply with the following formatting requirements:</p>
     * <ul> <li> <p>Formatted as a fully-qualified domain name (FQDN), <i>
     * <code>hostname.domain</code> </i>, for example,
     * <code>accounting.corp.example.com</code>.</p> </li> <li> <p>Can contain
     * alphanumeric characters and the hyphen (-).</p> </li> <li> <p>Cannot start or
     * end with a hyphen.</p> </li> <li> <p>Can start with a numeric.</p> </li> </ul>
     * <p>For DNS alias names, Amazon FSx stores alphabetic characters as lowercase
     * letters (a-z), regardless of how you specify them: as uppercase letters,
     * lowercase letters, or the corresponding letters in escape codes.</p>
     */
    inline void SetAliases(const Aws::Vector<Aws::String>& value) { m_aliasesHasBeenSet = true; m_aliases = value; }

    /**
     * <p>An array of one or more DNS alias names to associate with the file system.
     * The alias name has to comply with the following formatting requirements:</p>
     * <ul> <li> <p>Formatted as a fully-qualified domain name (FQDN), <i>
     * <code>hostname.domain</code> </i>, for example,
     * <code>accounting.corp.example.com</code>.</p> </li> <li> <p>Can contain
     * alphanumeric characters and the hyphen (-).</p> </li> <li> <p>Cannot start or
     * end with a hyphen.</p> </li> <li> <p>Can start with a numeric.</p> </li> </ul>
     * <p>For DNS alias names, Amazon FSx stores alphabetic characters as lowercase
     * letters (a-z), regardless of how you specify them: as uppercase letters,
     * lowercase letters, or the corresponding letters in escape codes.</p>
     */
    inline void SetAliases(Aws::Vector<Aws::String>&& value) { m_aliasesHasBeenSet = true; m_aliases = std::move(value); }

    /**
     * <p>An array of one or more DNS alias names to associate with the file system.
     * The alias name has to comply with the following formatting requirements:</p>
     * <ul> <li> <p>Formatted as a fully-qualified domain name (FQDN), <i>
     * <code>hostname.domain</code> </i>, for example,
     * <code>accounting.corp.example.com</code>.</p> </li> <li> <p>Can contain
     * alphanumeric characters and the hyphen (-).</p> </li> <li> <p>Cannot start or
     * end with a hyphen.</p> </li> <li> <p>Can start with a numeric.</p> </li> </ul>
     * <p>For DNS alias names, Amazon FSx stores alphabetic characters as lowercase
     * letters (a-z), regardless of how you specify them: as uppercase letters,
     * lowercase letters, or the corresponding letters in escape codes.</p>
     */
    inline AssociateFileSystemAliasesRequest& WithAliases(const Aws::Vector<Aws::String>& value) { SetAliases(value); return *this;}

    /**
     * <p>An array of one or more DNS alias names to associate with the file system.
     * The alias name has to comply with the following formatting requirements:</p>
     * <ul> <li> <p>Formatted as a fully-qualified domain name (FQDN), <i>
     * <code>hostname.domain</code> </i>, for example,
     * <code>accounting.corp.example.com</code>.</p> </li> <li> <p>Can contain
     * alphanumeric characters and the hyphen (-).</p> </li> <li> <p>Cannot start or
     * end with a hyphen.</p> </li> <li> <p>Can start with a numeric.</p> </li> </ul>
     * <p>For DNS alias names, Amazon FSx stores alphabetic characters as lowercase
     * letters (a-z), regardless of how you specify them: as uppercase letters,
     * lowercase letters, or the corresponding letters in escape codes.</p>
     */
    inline AssociateFileSystemAliasesRequest& WithAliases(Aws::Vector<Aws::String>&& value) { SetAliases(std::move(value)); return *this;}

    /**
     * <p>An array of one or more DNS alias names to associate with the file system.
     * The alias name has to comply with the following formatting requirements:</p>
     * <ul> <li> <p>Formatted as a fully-qualified domain name (FQDN), <i>
     * <code>hostname.domain</code> </i>, for example,
     * <code>accounting.corp.example.com</code>.</p> </li> <li> <p>Can contain
     * alphanumeric characters and the hyphen (-).</p> </li> <li> <p>Cannot start or
     * end with a hyphen.</p> </li> <li> <p>Can start with a numeric.</p> </li> </ul>
     * <p>For DNS alias names, Amazon FSx stores alphabetic characters as lowercase
     * letters (a-z), regardless of how you specify them: as uppercase letters,
     * lowercase letters, or the corresponding letters in escape codes.</p>
     */
    inline AssociateFileSystemAliasesRequest& AddAliases(const Aws::String& value) { m_aliasesHasBeenSet = true; m_aliases.push_back(value); return *this; }

    /**
     * <p>An array of one or more DNS alias names to associate with the file system.
     * The alias name has to comply with the following formatting requirements:</p>
     * <ul> <li> <p>Formatted as a fully-qualified domain name (FQDN), <i>
     * <code>hostname.domain</code> </i>, for example,
     * <code>accounting.corp.example.com</code>.</p> </li> <li> <p>Can contain
     * alphanumeric characters and the hyphen (-).</p> </li> <li> <p>Cannot start or
     * end with a hyphen.</p> </li> <li> <p>Can start with a numeric.</p> </li> </ul>
     * <p>For DNS alias names, Amazon FSx stores alphabetic characters as lowercase
     * letters (a-z), regardless of how you specify them: as uppercase letters,
     * lowercase letters, or the corresponding letters in escape codes.</p>
     */
    inline AssociateFileSystemAliasesRequest& AddAliases(Aws::String&& value) { m_aliasesHasBeenSet = true; m_aliases.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of one or more DNS alias names to associate with the file system.
     * The alias name has to comply with the following formatting requirements:</p>
     * <ul> <li> <p>Formatted as a fully-qualified domain name (FQDN), <i>
     * <code>hostname.domain</code> </i>, for example,
     * <code>accounting.corp.example.com</code>.</p> </li> <li> <p>Can contain
     * alphanumeric characters and the hyphen (-).</p> </li> <li> <p>Cannot start or
     * end with a hyphen.</p> </li> <li> <p>Can start with a numeric.</p> </li> </ul>
     * <p>For DNS alias names, Amazon FSx stores alphabetic characters as lowercase
     * letters (a-z), regardless of how you specify them: as uppercase letters,
     * lowercase letters, or the corresponding letters in escape codes.</p>
     */
    inline AssociateFileSystemAliasesRequest& AddAliases(const char* value) { m_aliasesHasBeenSet = true; m_aliases.push_back(value); return *this; }

  private:

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_aliases;
    bool m_aliasesHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
