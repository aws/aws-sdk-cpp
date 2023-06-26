﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace LocationService
{
namespace Model
{

  /**
   * <p>API Restrictions on the allowed actions, resources, and referers for an API
   * key resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ApiKeyRestrictions">AWS
   * API Reference</a></p>
   */
  class ApiKeyRestrictions
  {
  public:
    AWS_LOCATIONSERVICE_API ApiKeyRestrictions();
    AWS_LOCATIONSERVICE_API ApiKeyRestrictions(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API ApiKeyRestrictions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of allowed actions that an API key resource grants permissions to
     * perform</p>  <p>Currently, the only valid action is
     * <code>geo:GetMap*</code> as an input to the list. For example,
     * <code>["geo:GetMap*"]</code> is valid but <code>["geo:GetMapTile"]</code> is
     * not.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetAllowActions() const{ return m_allowActions; }

    /**
     * <p>A list of allowed actions that an API key resource grants permissions to
     * perform</p>  <p>Currently, the only valid action is
     * <code>geo:GetMap*</code> as an input to the list. For example,
     * <code>["geo:GetMap*"]</code> is valid but <code>["geo:GetMapTile"]</code> is
     * not.</p> 
     */
    inline bool AllowActionsHasBeenSet() const { return m_allowActionsHasBeenSet; }

    /**
     * <p>A list of allowed actions that an API key resource grants permissions to
     * perform</p>  <p>Currently, the only valid action is
     * <code>geo:GetMap*</code> as an input to the list. For example,
     * <code>["geo:GetMap*"]</code> is valid but <code>["geo:GetMapTile"]</code> is
     * not.</p> 
     */
    inline void SetAllowActions(const Aws::Vector<Aws::String>& value) { m_allowActionsHasBeenSet = true; m_allowActions = value; }

    /**
     * <p>A list of allowed actions that an API key resource grants permissions to
     * perform</p>  <p>Currently, the only valid action is
     * <code>geo:GetMap*</code> as an input to the list. For example,
     * <code>["geo:GetMap*"]</code> is valid but <code>["geo:GetMapTile"]</code> is
     * not.</p> 
     */
    inline void SetAllowActions(Aws::Vector<Aws::String>&& value) { m_allowActionsHasBeenSet = true; m_allowActions = std::move(value); }

    /**
     * <p>A list of allowed actions that an API key resource grants permissions to
     * perform</p>  <p>Currently, the only valid action is
     * <code>geo:GetMap*</code> as an input to the list. For example,
     * <code>["geo:GetMap*"]</code> is valid but <code>["geo:GetMapTile"]</code> is
     * not.</p> 
     */
    inline ApiKeyRestrictions& WithAllowActions(const Aws::Vector<Aws::String>& value) { SetAllowActions(value); return *this;}

    /**
     * <p>A list of allowed actions that an API key resource grants permissions to
     * perform</p>  <p>Currently, the only valid action is
     * <code>geo:GetMap*</code> as an input to the list. For example,
     * <code>["geo:GetMap*"]</code> is valid but <code>["geo:GetMapTile"]</code> is
     * not.</p> 
     */
    inline ApiKeyRestrictions& WithAllowActions(Aws::Vector<Aws::String>&& value) { SetAllowActions(std::move(value)); return *this;}

    /**
     * <p>A list of allowed actions that an API key resource grants permissions to
     * perform</p>  <p>Currently, the only valid action is
     * <code>geo:GetMap*</code> as an input to the list. For example,
     * <code>["geo:GetMap*"]</code> is valid but <code>["geo:GetMapTile"]</code> is
     * not.</p> 
     */
    inline ApiKeyRestrictions& AddAllowActions(const Aws::String& value) { m_allowActionsHasBeenSet = true; m_allowActions.push_back(value); return *this; }

    /**
     * <p>A list of allowed actions that an API key resource grants permissions to
     * perform</p>  <p>Currently, the only valid action is
     * <code>geo:GetMap*</code> as an input to the list. For example,
     * <code>["geo:GetMap*"]</code> is valid but <code>["geo:GetMapTile"]</code> is
     * not.</p> 
     */
    inline ApiKeyRestrictions& AddAllowActions(Aws::String&& value) { m_allowActionsHasBeenSet = true; m_allowActions.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of allowed actions that an API key resource grants permissions to
     * perform</p>  <p>Currently, the only valid action is
     * <code>geo:GetMap*</code> as an input to the list. For example,
     * <code>["geo:GetMap*"]</code> is valid but <code>["geo:GetMapTile"]</code> is
     * not.</p> 
     */
    inline ApiKeyRestrictions& AddAllowActions(const char* value) { m_allowActionsHasBeenSet = true; m_allowActions.push_back(value); return *this; }


    /**
     * <p>An optional list of allowed HTTP referers for which requests must originate
     * from. Requests using this API key from other domains will not be allowed.</p>
     * <p>Requirements:</p> <ul> <li> <p>Contain only alphanumeric characters (A–Z,
     * a–z, 0–9) or any symbols in this list <code>$\-._+!*`(),;/?:@=&amp;</code> </p>
     * </li> <li> <p>May contain a percent (%) if followed by 2 hexadecimal digits
     * (A-F, a-f, 0-9); this is used for URL encoding purposes.</p> </li> <li> <p>May
     * contain wildcard characters question mark (?) and asterisk (*).</p> <p>Question
     * mark (?) will replace any single character (including hexadecimal digits).</p>
     * <p>Asterisk (*) will replace any multiple characters (including multiple
     * hexadecimal digits).</p> </li> <li> <p>No spaces allowed. For example,
     * <code>https://example.com</code>.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetAllowReferers() const{ return m_allowReferers; }

    /**
     * <p>An optional list of allowed HTTP referers for which requests must originate
     * from. Requests using this API key from other domains will not be allowed.</p>
     * <p>Requirements:</p> <ul> <li> <p>Contain only alphanumeric characters (A–Z,
     * a–z, 0–9) or any symbols in this list <code>$\-._+!*`(),;/?:@=&amp;</code> </p>
     * </li> <li> <p>May contain a percent (%) if followed by 2 hexadecimal digits
     * (A-F, a-f, 0-9); this is used for URL encoding purposes.</p> </li> <li> <p>May
     * contain wildcard characters question mark (?) and asterisk (*).</p> <p>Question
     * mark (?) will replace any single character (including hexadecimal digits).</p>
     * <p>Asterisk (*) will replace any multiple characters (including multiple
     * hexadecimal digits).</p> </li> <li> <p>No spaces allowed. For example,
     * <code>https://example.com</code>.</p> </li> </ul>
     */
    inline bool AllowReferersHasBeenSet() const { return m_allowReferersHasBeenSet; }

    /**
     * <p>An optional list of allowed HTTP referers for which requests must originate
     * from. Requests using this API key from other domains will not be allowed.</p>
     * <p>Requirements:</p> <ul> <li> <p>Contain only alphanumeric characters (A–Z,
     * a–z, 0–9) or any symbols in this list <code>$\-._+!*`(),;/?:@=&amp;</code> </p>
     * </li> <li> <p>May contain a percent (%) if followed by 2 hexadecimal digits
     * (A-F, a-f, 0-9); this is used for URL encoding purposes.</p> </li> <li> <p>May
     * contain wildcard characters question mark (?) and asterisk (*).</p> <p>Question
     * mark (?) will replace any single character (including hexadecimal digits).</p>
     * <p>Asterisk (*) will replace any multiple characters (including multiple
     * hexadecimal digits).</p> </li> <li> <p>No spaces allowed. For example,
     * <code>https://example.com</code>.</p> </li> </ul>
     */
    inline void SetAllowReferers(const Aws::Vector<Aws::String>& value) { m_allowReferersHasBeenSet = true; m_allowReferers = value; }

    /**
     * <p>An optional list of allowed HTTP referers for which requests must originate
     * from. Requests using this API key from other domains will not be allowed.</p>
     * <p>Requirements:</p> <ul> <li> <p>Contain only alphanumeric characters (A–Z,
     * a–z, 0–9) or any symbols in this list <code>$\-._+!*`(),;/?:@=&amp;</code> </p>
     * </li> <li> <p>May contain a percent (%) if followed by 2 hexadecimal digits
     * (A-F, a-f, 0-9); this is used for URL encoding purposes.</p> </li> <li> <p>May
     * contain wildcard characters question mark (?) and asterisk (*).</p> <p>Question
     * mark (?) will replace any single character (including hexadecimal digits).</p>
     * <p>Asterisk (*) will replace any multiple characters (including multiple
     * hexadecimal digits).</p> </li> <li> <p>No spaces allowed. For example,
     * <code>https://example.com</code>.</p> </li> </ul>
     */
    inline void SetAllowReferers(Aws::Vector<Aws::String>&& value) { m_allowReferersHasBeenSet = true; m_allowReferers = std::move(value); }

    /**
     * <p>An optional list of allowed HTTP referers for which requests must originate
     * from. Requests using this API key from other domains will not be allowed.</p>
     * <p>Requirements:</p> <ul> <li> <p>Contain only alphanumeric characters (A–Z,
     * a–z, 0–9) or any symbols in this list <code>$\-._+!*`(),;/?:@=&amp;</code> </p>
     * </li> <li> <p>May contain a percent (%) if followed by 2 hexadecimal digits
     * (A-F, a-f, 0-9); this is used for URL encoding purposes.</p> </li> <li> <p>May
     * contain wildcard characters question mark (?) and asterisk (*).</p> <p>Question
     * mark (?) will replace any single character (including hexadecimal digits).</p>
     * <p>Asterisk (*) will replace any multiple characters (including multiple
     * hexadecimal digits).</p> </li> <li> <p>No spaces allowed. For example,
     * <code>https://example.com</code>.</p> </li> </ul>
     */
    inline ApiKeyRestrictions& WithAllowReferers(const Aws::Vector<Aws::String>& value) { SetAllowReferers(value); return *this;}

    /**
     * <p>An optional list of allowed HTTP referers for which requests must originate
     * from. Requests using this API key from other domains will not be allowed.</p>
     * <p>Requirements:</p> <ul> <li> <p>Contain only alphanumeric characters (A–Z,
     * a–z, 0–9) or any symbols in this list <code>$\-._+!*`(),;/?:@=&amp;</code> </p>
     * </li> <li> <p>May contain a percent (%) if followed by 2 hexadecimal digits
     * (A-F, a-f, 0-9); this is used for URL encoding purposes.</p> </li> <li> <p>May
     * contain wildcard characters question mark (?) and asterisk (*).</p> <p>Question
     * mark (?) will replace any single character (including hexadecimal digits).</p>
     * <p>Asterisk (*) will replace any multiple characters (including multiple
     * hexadecimal digits).</p> </li> <li> <p>No spaces allowed. For example,
     * <code>https://example.com</code>.</p> </li> </ul>
     */
    inline ApiKeyRestrictions& WithAllowReferers(Aws::Vector<Aws::String>&& value) { SetAllowReferers(std::move(value)); return *this;}

    /**
     * <p>An optional list of allowed HTTP referers for which requests must originate
     * from. Requests using this API key from other domains will not be allowed.</p>
     * <p>Requirements:</p> <ul> <li> <p>Contain only alphanumeric characters (A–Z,
     * a–z, 0–9) or any symbols in this list <code>$\-._+!*`(),;/?:@=&amp;</code> </p>
     * </li> <li> <p>May contain a percent (%) if followed by 2 hexadecimal digits
     * (A-F, a-f, 0-9); this is used for URL encoding purposes.</p> </li> <li> <p>May
     * contain wildcard characters question mark (?) and asterisk (*).</p> <p>Question
     * mark (?) will replace any single character (including hexadecimal digits).</p>
     * <p>Asterisk (*) will replace any multiple characters (including multiple
     * hexadecimal digits).</p> </li> <li> <p>No spaces allowed. For example,
     * <code>https://example.com</code>.</p> </li> </ul>
     */
    inline ApiKeyRestrictions& AddAllowReferers(const Aws::String& value) { m_allowReferersHasBeenSet = true; m_allowReferers.push_back(value); return *this; }

    /**
     * <p>An optional list of allowed HTTP referers for which requests must originate
     * from. Requests using this API key from other domains will not be allowed.</p>
     * <p>Requirements:</p> <ul> <li> <p>Contain only alphanumeric characters (A–Z,
     * a–z, 0–9) or any symbols in this list <code>$\-._+!*`(),;/?:@=&amp;</code> </p>
     * </li> <li> <p>May contain a percent (%) if followed by 2 hexadecimal digits
     * (A-F, a-f, 0-9); this is used for URL encoding purposes.</p> </li> <li> <p>May
     * contain wildcard characters question mark (?) and asterisk (*).</p> <p>Question
     * mark (?) will replace any single character (including hexadecimal digits).</p>
     * <p>Asterisk (*) will replace any multiple characters (including multiple
     * hexadecimal digits).</p> </li> <li> <p>No spaces allowed. For example,
     * <code>https://example.com</code>.</p> </li> </ul>
     */
    inline ApiKeyRestrictions& AddAllowReferers(Aws::String&& value) { m_allowReferersHasBeenSet = true; m_allowReferers.push_back(std::move(value)); return *this; }

    /**
     * <p>An optional list of allowed HTTP referers for which requests must originate
     * from. Requests using this API key from other domains will not be allowed.</p>
     * <p>Requirements:</p> <ul> <li> <p>Contain only alphanumeric characters (A–Z,
     * a–z, 0–9) or any symbols in this list <code>$\-._+!*`(),;/?:@=&amp;</code> </p>
     * </li> <li> <p>May contain a percent (%) if followed by 2 hexadecimal digits
     * (A-F, a-f, 0-9); this is used for URL encoding purposes.</p> </li> <li> <p>May
     * contain wildcard characters question mark (?) and asterisk (*).</p> <p>Question
     * mark (?) will replace any single character (including hexadecimal digits).</p>
     * <p>Asterisk (*) will replace any multiple characters (including multiple
     * hexadecimal digits).</p> </li> <li> <p>No spaces allowed. For example,
     * <code>https://example.com</code>.</p> </li> </ul>
     */
    inline ApiKeyRestrictions& AddAllowReferers(const char* value) { m_allowReferersHasBeenSet = true; m_allowReferers.push_back(value); return *this; }


    /**
     * <p>A list of allowed resource ARNs that a API key bearer can perform actions
     * on</p> <p>For more information about ARN format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a>.</p>  <p>In this preview, you can allow only map
     * resources.</p>  <p>Requirements:</p> <ul> <li> <p>Must be prefixed with
     * <code>arn</code>.</p> </li> <li> <p> <code>partition</code> and
     * <code>service</code> must not be empty and should begin with only alphanumeric
     * characters (A–Z, a–z, 0–9) and contain only alphanumeric numbers, hyphens (-)
     * and periods (.).</p> </li> <li> <p> <code>region</code> and
     * <code>account-id</code> can be empty or should begin with only alphanumeric
     * characters (A–Z, a–z, 0–9) and contain only alphanumeric numbers, hyphens (-)
     * and periods (.).</p> </li> <li> <p> <code>resource-id</code> can begin with any
     * character except for forward slash (/) and contain any characters after,
     * including forward slashes to form a path.</p> <p> <code>resource-id</code> can
     * also include wildcard characters, denoted by an asterisk (*).</p> </li> <li> <p>
     * <code>arn</code>, <code>partition</code>, <code>service</code>,
     * <code>region</code>, <code>account-id</code> and <code>resource-id</code> must
     * be delimited by a colon (:).</p> </li> <li> <p>No spaces allowed. For example,
     * <code>arn:aws:geo:region:<i>account-id</i>:map/ExampleMap*</code>.</p> </li>
     * </ul>
     */
    inline const Aws::Vector<Aws::String>& GetAllowResources() const{ return m_allowResources; }

    /**
     * <p>A list of allowed resource ARNs that a API key bearer can perform actions
     * on</p> <p>For more information about ARN format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a>.</p>  <p>In this preview, you can allow only map
     * resources.</p>  <p>Requirements:</p> <ul> <li> <p>Must be prefixed with
     * <code>arn</code>.</p> </li> <li> <p> <code>partition</code> and
     * <code>service</code> must not be empty and should begin with only alphanumeric
     * characters (A–Z, a–z, 0–9) and contain only alphanumeric numbers, hyphens (-)
     * and periods (.).</p> </li> <li> <p> <code>region</code> and
     * <code>account-id</code> can be empty or should begin with only alphanumeric
     * characters (A–Z, a–z, 0–9) and contain only alphanumeric numbers, hyphens (-)
     * and periods (.).</p> </li> <li> <p> <code>resource-id</code> can begin with any
     * character except for forward slash (/) and contain any characters after,
     * including forward slashes to form a path.</p> <p> <code>resource-id</code> can
     * also include wildcard characters, denoted by an asterisk (*).</p> </li> <li> <p>
     * <code>arn</code>, <code>partition</code>, <code>service</code>,
     * <code>region</code>, <code>account-id</code> and <code>resource-id</code> must
     * be delimited by a colon (:).</p> </li> <li> <p>No spaces allowed. For example,
     * <code>arn:aws:geo:region:<i>account-id</i>:map/ExampleMap*</code>.</p> </li>
     * </ul>
     */
    inline bool AllowResourcesHasBeenSet() const { return m_allowResourcesHasBeenSet; }

    /**
     * <p>A list of allowed resource ARNs that a API key bearer can perform actions
     * on</p> <p>For more information about ARN format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a>.</p>  <p>In this preview, you can allow only map
     * resources.</p>  <p>Requirements:</p> <ul> <li> <p>Must be prefixed with
     * <code>arn</code>.</p> </li> <li> <p> <code>partition</code> and
     * <code>service</code> must not be empty and should begin with only alphanumeric
     * characters (A–Z, a–z, 0–9) and contain only alphanumeric numbers, hyphens (-)
     * and periods (.).</p> </li> <li> <p> <code>region</code> and
     * <code>account-id</code> can be empty or should begin with only alphanumeric
     * characters (A–Z, a–z, 0–9) and contain only alphanumeric numbers, hyphens (-)
     * and periods (.).</p> </li> <li> <p> <code>resource-id</code> can begin with any
     * character except for forward slash (/) and contain any characters after,
     * including forward slashes to form a path.</p> <p> <code>resource-id</code> can
     * also include wildcard characters, denoted by an asterisk (*).</p> </li> <li> <p>
     * <code>arn</code>, <code>partition</code>, <code>service</code>,
     * <code>region</code>, <code>account-id</code> and <code>resource-id</code> must
     * be delimited by a colon (:).</p> </li> <li> <p>No spaces allowed. For example,
     * <code>arn:aws:geo:region:<i>account-id</i>:map/ExampleMap*</code>.</p> </li>
     * </ul>
     */
    inline void SetAllowResources(const Aws::Vector<Aws::String>& value) { m_allowResourcesHasBeenSet = true; m_allowResources = value; }

    /**
     * <p>A list of allowed resource ARNs that a API key bearer can perform actions
     * on</p> <p>For more information about ARN format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a>.</p>  <p>In this preview, you can allow only map
     * resources.</p>  <p>Requirements:</p> <ul> <li> <p>Must be prefixed with
     * <code>arn</code>.</p> </li> <li> <p> <code>partition</code> and
     * <code>service</code> must not be empty and should begin with only alphanumeric
     * characters (A–Z, a–z, 0–9) and contain only alphanumeric numbers, hyphens (-)
     * and periods (.).</p> </li> <li> <p> <code>region</code> and
     * <code>account-id</code> can be empty or should begin with only alphanumeric
     * characters (A–Z, a–z, 0–9) and contain only alphanumeric numbers, hyphens (-)
     * and periods (.).</p> </li> <li> <p> <code>resource-id</code> can begin with any
     * character except for forward slash (/) and contain any characters after,
     * including forward slashes to form a path.</p> <p> <code>resource-id</code> can
     * also include wildcard characters, denoted by an asterisk (*).</p> </li> <li> <p>
     * <code>arn</code>, <code>partition</code>, <code>service</code>,
     * <code>region</code>, <code>account-id</code> and <code>resource-id</code> must
     * be delimited by a colon (:).</p> </li> <li> <p>No spaces allowed. For example,
     * <code>arn:aws:geo:region:<i>account-id</i>:map/ExampleMap*</code>.</p> </li>
     * </ul>
     */
    inline void SetAllowResources(Aws::Vector<Aws::String>&& value) { m_allowResourcesHasBeenSet = true; m_allowResources = std::move(value); }

    /**
     * <p>A list of allowed resource ARNs that a API key bearer can perform actions
     * on</p> <p>For more information about ARN format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a>.</p>  <p>In this preview, you can allow only map
     * resources.</p>  <p>Requirements:</p> <ul> <li> <p>Must be prefixed with
     * <code>arn</code>.</p> </li> <li> <p> <code>partition</code> and
     * <code>service</code> must not be empty and should begin with only alphanumeric
     * characters (A–Z, a–z, 0–9) and contain only alphanumeric numbers, hyphens (-)
     * and periods (.).</p> </li> <li> <p> <code>region</code> and
     * <code>account-id</code> can be empty or should begin with only alphanumeric
     * characters (A–Z, a–z, 0–9) and contain only alphanumeric numbers, hyphens (-)
     * and periods (.).</p> </li> <li> <p> <code>resource-id</code> can begin with any
     * character except for forward slash (/) and contain any characters after,
     * including forward slashes to form a path.</p> <p> <code>resource-id</code> can
     * also include wildcard characters, denoted by an asterisk (*).</p> </li> <li> <p>
     * <code>arn</code>, <code>partition</code>, <code>service</code>,
     * <code>region</code>, <code>account-id</code> and <code>resource-id</code> must
     * be delimited by a colon (:).</p> </li> <li> <p>No spaces allowed. For example,
     * <code>arn:aws:geo:region:<i>account-id</i>:map/ExampleMap*</code>.</p> </li>
     * </ul>
     */
    inline ApiKeyRestrictions& WithAllowResources(const Aws::Vector<Aws::String>& value) { SetAllowResources(value); return *this;}

    /**
     * <p>A list of allowed resource ARNs that a API key bearer can perform actions
     * on</p> <p>For more information about ARN format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a>.</p>  <p>In this preview, you can allow only map
     * resources.</p>  <p>Requirements:</p> <ul> <li> <p>Must be prefixed with
     * <code>arn</code>.</p> </li> <li> <p> <code>partition</code> and
     * <code>service</code> must not be empty and should begin with only alphanumeric
     * characters (A–Z, a–z, 0–9) and contain only alphanumeric numbers, hyphens (-)
     * and periods (.).</p> </li> <li> <p> <code>region</code> and
     * <code>account-id</code> can be empty or should begin with only alphanumeric
     * characters (A–Z, a–z, 0–9) and contain only alphanumeric numbers, hyphens (-)
     * and periods (.).</p> </li> <li> <p> <code>resource-id</code> can begin with any
     * character except for forward slash (/) and contain any characters after,
     * including forward slashes to form a path.</p> <p> <code>resource-id</code> can
     * also include wildcard characters, denoted by an asterisk (*).</p> </li> <li> <p>
     * <code>arn</code>, <code>partition</code>, <code>service</code>,
     * <code>region</code>, <code>account-id</code> and <code>resource-id</code> must
     * be delimited by a colon (:).</p> </li> <li> <p>No spaces allowed. For example,
     * <code>arn:aws:geo:region:<i>account-id</i>:map/ExampleMap*</code>.</p> </li>
     * </ul>
     */
    inline ApiKeyRestrictions& WithAllowResources(Aws::Vector<Aws::String>&& value) { SetAllowResources(std::move(value)); return *this;}

    /**
     * <p>A list of allowed resource ARNs that a API key bearer can perform actions
     * on</p> <p>For more information about ARN format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a>.</p>  <p>In this preview, you can allow only map
     * resources.</p>  <p>Requirements:</p> <ul> <li> <p>Must be prefixed with
     * <code>arn</code>.</p> </li> <li> <p> <code>partition</code> and
     * <code>service</code> must not be empty and should begin with only alphanumeric
     * characters (A–Z, a–z, 0–9) and contain only alphanumeric numbers, hyphens (-)
     * and periods (.).</p> </li> <li> <p> <code>region</code> and
     * <code>account-id</code> can be empty or should begin with only alphanumeric
     * characters (A–Z, a–z, 0–9) and contain only alphanumeric numbers, hyphens (-)
     * and periods (.).</p> </li> <li> <p> <code>resource-id</code> can begin with any
     * character except for forward slash (/) and contain any characters after,
     * including forward slashes to form a path.</p> <p> <code>resource-id</code> can
     * also include wildcard characters, denoted by an asterisk (*).</p> </li> <li> <p>
     * <code>arn</code>, <code>partition</code>, <code>service</code>,
     * <code>region</code>, <code>account-id</code> and <code>resource-id</code> must
     * be delimited by a colon (:).</p> </li> <li> <p>No spaces allowed. For example,
     * <code>arn:aws:geo:region:<i>account-id</i>:map/ExampleMap*</code>.</p> </li>
     * </ul>
     */
    inline ApiKeyRestrictions& AddAllowResources(const Aws::String& value) { m_allowResourcesHasBeenSet = true; m_allowResources.push_back(value); return *this; }

    /**
     * <p>A list of allowed resource ARNs that a API key bearer can perform actions
     * on</p> <p>For more information about ARN format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a>.</p>  <p>In this preview, you can allow only map
     * resources.</p>  <p>Requirements:</p> <ul> <li> <p>Must be prefixed with
     * <code>arn</code>.</p> </li> <li> <p> <code>partition</code> and
     * <code>service</code> must not be empty and should begin with only alphanumeric
     * characters (A–Z, a–z, 0–9) and contain only alphanumeric numbers, hyphens (-)
     * and periods (.).</p> </li> <li> <p> <code>region</code> and
     * <code>account-id</code> can be empty or should begin with only alphanumeric
     * characters (A–Z, a–z, 0–9) and contain only alphanumeric numbers, hyphens (-)
     * and periods (.).</p> </li> <li> <p> <code>resource-id</code> can begin with any
     * character except for forward slash (/) and contain any characters after,
     * including forward slashes to form a path.</p> <p> <code>resource-id</code> can
     * also include wildcard characters, denoted by an asterisk (*).</p> </li> <li> <p>
     * <code>arn</code>, <code>partition</code>, <code>service</code>,
     * <code>region</code>, <code>account-id</code> and <code>resource-id</code> must
     * be delimited by a colon (:).</p> </li> <li> <p>No spaces allowed. For example,
     * <code>arn:aws:geo:region:<i>account-id</i>:map/ExampleMap*</code>.</p> </li>
     * </ul>
     */
    inline ApiKeyRestrictions& AddAllowResources(Aws::String&& value) { m_allowResourcesHasBeenSet = true; m_allowResources.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of allowed resource ARNs that a API key bearer can perform actions
     * on</p> <p>For more information about ARN format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a>.</p>  <p>In this preview, you can allow only map
     * resources.</p>  <p>Requirements:</p> <ul> <li> <p>Must be prefixed with
     * <code>arn</code>.</p> </li> <li> <p> <code>partition</code> and
     * <code>service</code> must not be empty and should begin with only alphanumeric
     * characters (A–Z, a–z, 0–9) and contain only alphanumeric numbers, hyphens (-)
     * and periods (.).</p> </li> <li> <p> <code>region</code> and
     * <code>account-id</code> can be empty or should begin with only alphanumeric
     * characters (A–Z, a–z, 0–9) and contain only alphanumeric numbers, hyphens (-)
     * and periods (.).</p> </li> <li> <p> <code>resource-id</code> can begin with any
     * character except for forward slash (/) and contain any characters after,
     * including forward slashes to form a path.</p> <p> <code>resource-id</code> can
     * also include wildcard characters, denoted by an asterisk (*).</p> </li> <li> <p>
     * <code>arn</code>, <code>partition</code>, <code>service</code>,
     * <code>region</code>, <code>account-id</code> and <code>resource-id</code> must
     * be delimited by a colon (:).</p> </li> <li> <p>No spaces allowed. For example,
     * <code>arn:aws:geo:region:<i>account-id</i>:map/ExampleMap*</code>.</p> </li>
     * </ul>
     */
    inline ApiKeyRestrictions& AddAllowResources(const char* value) { m_allowResourcesHasBeenSet = true; m_allowResources.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_allowActions;
    bool m_allowActionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowReferers;
    bool m_allowReferersHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowResources;
    bool m_allowResourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
