/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/AliasLifecycle.h>
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
namespace FSx
{
namespace Model
{

  /**
   * <p>A DNS alias that is associated with the file system. You can use a DNS alias
   * to access a file system using user-defined DNS names, in addition to the default
   * DNS name that Amazon FSx assigns to the file system. For more information, see
   * <a
   * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/managing-dns-aliases.html">DNS
   * aliases</a> in the <i>FSx for Windows File Server User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/Alias">AWS API
   * Reference</a></p>
   */
  class Alias
  {
  public:
    AWS_FSX_API Alias();
    AWS_FSX_API Alias(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Alias& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the DNS alias. The alias name has to meet the following
     * requirements:</p> <ul> <li> <p>Formatted as a fully-qualified domain name
     * (FQDN), <code>hostname.domain</code>, for example,
     * <code>accounting.example.com</code>.</p> </li> <li> <p>Can contain alphanumeric
     * characters, the underscore (_), and the hyphen (-).</p> </li> <li> <p>Cannot
     * start or end with a hyphen.</p> </li> <li> <p>Can start with a numeric.</p>
     * </li> </ul> <p>For DNS names, Amazon FSx stores alphabetic characters as
     * lowercase letters (a-z), regardless of how you specify them: as uppercase
     * letters, lowercase letters, or the corresponding letters in escape codes.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the DNS alias. The alias name has to meet the following
     * requirements:</p> <ul> <li> <p>Formatted as a fully-qualified domain name
     * (FQDN), <code>hostname.domain</code>, for example,
     * <code>accounting.example.com</code>.</p> </li> <li> <p>Can contain alphanumeric
     * characters, the underscore (_), and the hyphen (-).</p> </li> <li> <p>Cannot
     * start or end with a hyphen.</p> </li> <li> <p>Can start with a numeric.</p>
     * </li> </ul> <p>For DNS names, Amazon FSx stores alphabetic characters as
     * lowercase letters (a-z), regardless of how you specify them: as uppercase
     * letters, lowercase letters, or the corresponding letters in escape codes.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the DNS alias. The alias name has to meet the following
     * requirements:</p> <ul> <li> <p>Formatted as a fully-qualified domain name
     * (FQDN), <code>hostname.domain</code>, for example,
     * <code>accounting.example.com</code>.</p> </li> <li> <p>Can contain alphanumeric
     * characters, the underscore (_), and the hyphen (-).</p> </li> <li> <p>Cannot
     * start or end with a hyphen.</p> </li> <li> <p>Can start with a numeric.</p>
     * </li> </ul> <p>For DNS names, Amazon FSx stores alphabetic characters as
     * lowercase letters (a-z), regardless of how you specify them: as uppercase
     * letters, lowercase letters, or the corresponding letters in escape codes.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the DNS alias. The alias name has to meet the following
     * requirements:</p> <ul> <li> <p>Formatted as a fully-qualified domain name
     * (FQDN), <code>hostname.domain</code>, for example,
     * <code>accounting.example.com</code>.</p> </li> <li> <p>Can contain alphanumeric
     * characters, the underscore (_), and the hyphen (-).</p> </li> <li> <p>Cannot
     * start or end with a hyphen.</p> </li> <li> <p>Can start with a numeric.</p>
     * </li> </ul> <p>For DNS names, Amazon FSx stores alphabetic characters as
     * lowercase letters (a-z), regardless of how you specify them: as uppercase
     * letters, lowercase letters, or the corresponding letters in escape codes.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the DNS alias. The alias name has to meet the following
     * requirements:</p> <ul> <li> <p>Formatted as a fully-qualified domain name
     * (FQDN), <code>hostname.domain</code>, for example,
     * <code>accounting.example.com</code>.</p> </li> <li> <p>Can contain alphanumeric
     * characters, the underscore (_), and the hyphen (-).</p> </li> <li> <p>Cannot
     * start or end with a hyphen.</p> </li> <li> <p>Can start with a numeric.</p>
     * </li> </ul> <p>For DNS names, Amazon FSx stores alphabetic characters as
     * lowercase letters (a-z), regardless of how you specify them: as uppercase
     * letters, lowercase letters, or the corresponding letters in escape codes.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the DNS alias. The alias name has to meet the following
     * requirements:</p> <ul> <li> <p>Formatted as a fully-qualified domain name
     * (FQDN), <code>hostname.domain</code>, for example,
     * <code>accounting.example.com</code>.</p> </li> <li> <p>Can contain alphanumeric
     * characters, the underscore (_), and the hyphen (-).</p> </li> <li> <p>Cannot
     * start or end with a hyphen.</p> </li> <li> <p>Can start with a numeric.</p>
     * </li> </ul> <p>For DNS names, Amazon FSx stores alphabetic characters as
     * lowercase letters (a-z), regardless of how you specify them: as uppercase
     * letters, lowercase letters, or the corresponding letters in escape codes.</p>
     */
    inline Alias& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the DNS alias. The alias name has to meet the following
     * requirements:</p> <ul> <li> <p>Formatted as a fully-qualified domain name
     * (FQDN), <code>hostname.domain</code>, for example,
     * <code>accounting.example.com</code>.</p> </li> <li> <p>Can contain alphanumeric
     * characters, the underscore (_), and the hyphen (-).</p> </li> <li> <p>Cannot
     * start or end with a hyphen.</p> </li> <li> <p>Can start with a numeric.</p>
     * </li> </ul> <p>For DNS names, Amazon FSx stores alphabetic characters as
     * lowercase letters (a-z), regardless of how you specify them: as uppercase
     * letters, lowercase letters, or the corresponding letters in escape codes.</p>
     */
    inline Alias& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the DNS alias. The alias name has to meet the following
     * requirements:</p> <ul> <li> <p>Formatted as a fully-qualified domain name
     * (FQDN), <code>hostname.domain</code>, for example,
     * <code>accounting.example.com</code>.</p> </li> <li> <p>Can contain alphanumeric
     * characters, the underscore (_), and the hyphen (-).</p> </li> <li> <p>Cannot
     * start or end with a hyphen.</p> </li> <li> <p>Can start with a numeric.</p>
     * </li> </ul> <p>For DNS names, Amazon FSx stores alphabetic characters as
     * lowercase letters (a-z), regardless of how you specify them: as uppercase
     * letters, lowercase letters, or the corresponding letters in escape codes.</p>
     */
    inline Alias& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Describes the state of the DNS alias.</p> <ul> <li> <p>AVAILABLE - The DNS
     * alias is associated with an Amazon FSx file system.</p> </li> <li> <p>CREATING -
     * Amazon FSx is creating the DNS alias and associating it with the file
     * system.</p> </li> <li> <p>CREATE_FAILED - Amazon FSx was unable to associate the
     * DNS alias with the file system.</p> </li> <li> <p>DELETING - Amazon FSx is
     * disassociating the DNS alias from the file system and deleting it.</p> </li>
     * <li> <p>DELETE_FAILED - Amazon FSx was unable to disassociate the DNS alias from
     * the file system.</p> </li> </ul>
     */
    inline const AliasLifecycle& GetLifecycle() const{ return m_lifecycle; }

    /**
     * <p>Describes the state of the DNS alias.</p> <ul> <li> <p>AVAILABLE - The DNS
     * alias is associated with an Amazon FSx file system.</p> </li> <li> <p>CREATING -
     * Amazon FSx is creating the DNS alias and associating it with the file
     * system.</p> </li> <li> <p>CREATE_FAILED - Amazon FSx was unable to associate the
     * DNS alias with the file system.</p> </li> <li> <p>DELETING - Amazon FSx is
     * disassociating the DNS alias from the file system and deleting it.</p> </li>
     * <li> <p>DELETE_FAILED - Amazon FSx was unable to disassociate the DNS alias from
     * the file system.</p> </li> </ul>
     */
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }

    /**
     * <p>Describes the state of the DNS alias.</p> <ul> <li> <p>AVAILABLE - The DNS
     * alias is associated with an Amazon FSx file system.</p> </li> <li> <p>CREATING -
     * Amazon FSx is creating the DNS alias and associating it with the file
     * system.</p> </li> <li> <p>CREATE_FAILED - Amazon FSx was unable to associate the
     * DNS alias with the file system.</p> </li> <li> <p>DELETING - Amazon FSx is
     * disassociating the DNS alias from the file system and deleting it.</p> </li>
     * <li> <p>DELETE_FAILED - Amazon FSx was unable to disassociate the DNS alias from
     * the file system.</p> </li> </ul>
     */
    inline void SetLifecycle(const AliasLifecycle& value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }

    /**
     * <p>Describes the state of the DNS alias.</p> <ul> <li> <p>AVAILABLE - The DNS
     * alias is associated with an Amazon FSx file system.</p> </li> <li> <p>CREATING -
     * Amazon FSx is creating the DNS alias and associating it with the file
     * system.</p> </li> <li> <p>CREATE_FAILED - Amazon FSx was unable to associate the
     * DNS alias with the file system.</p> </li> <li> <p>DELETING - Amazon FSx is
     * disassociating the DNS alias from the file system and deleting it.</p> </li>
     * <li> <p>DELETE_FAILED - Amazon FSx was unable to disassociate the DNS alias from
     * the file system.</p> </li> </ul>
     */
    inline void SetLifecycle(AliasLifecycle&& value) { m_lifecycleHasBeenSet = true; m_lifecycle = std::move(value); }

    /**
     * <p>Describes the state of the DNS alias.</p> <ul> <li> <p>AVAILABLE - The DNS
     * alias is associated with an Amazon FSx file system.</p> </li> <li> <p>CREATING -
     * Amazon FSx is creating the DNS alias and associating it with the file
     * system.</p> </li> <li> <p>CREATE_FAILED - Amazon FSx was unable to associate the
     * DNS alias with the file system.</p> </li> <li> <p>DELETING - Amazon FSx is
     * disassociating the DNS alias from the file system and deleting it.</p> </li>
     * <li> <p>DELETE_FAILED - Amazon FSx was unable to disassociate the DNS alias from
     * the file system.</p> </li> </ul>
     */
    inline Alias& WithLifecycle(const AliasLifecycle& value) { SetLifecycle(value); return *this;}

    /**
     * <p>Describes the state of the DNS alias.</p> <ul> <li> <p>AVAILABLE - The DNS
     * alias is associated with an Amazon FSx file system.</p> </li> <li> <p>CREATING -
     * Amazon FSx is creating the DNS alias and associating it with the file
     * system.</p> </li> <li> <p>CREATE_FAILED - Amazon FSx was unable to associate the
     * DNS alias with the file system.</p> </li> <li> <p>DELETING - Amazon FSx is
     * disassociating the DNS alias from the file system and deleting it.</p> </li>
     * <li> <p>DELETE_FAILED - Amazon FSx was unable to disassociate the DNS alias from
     * the file system.</p> </li> </ul>
     */
    inline Alias& WithLifecycle(AliasLifecycle&& value) { SetLifecycle(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AliasLifecycle m_lifecycle;
    bool m_lifecycleHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
