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
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/alexaforbusiness/model/SipType.h>
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
namespace AlexaForBusiness
{
namespace Model
{

  /**
   * <p>The SIP address for the contact containing the URI and SIP address
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SipAddress">AWS
   * API Reference</a></p>
   */
  class AWS_ALEXAFORBUSINESS_API SipAddress
  {
  public:
    SipAddress();
    SipAddress(Aws::Utils::Json::JsonView jsonValue);
    SipAddress& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URI for the SIP address.</p>
     */
    inline const Aws::String& GetUri() const{ return m_uri; }

    /**
     * <p>The URI for the SIP address.</p>
     */
    inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }

    /**
     * <p>The URI for the SIP address.</p>
     */
    inline void SetUri(const Aws::String& value) { m_uriHasBeenSet = true; m_uri = value; }

    /**
     * <p>The URI for the SIP address.</p>
     */
    inline void SetUri(Aws::String&& value) { m_uriHasBeenSet = true; m_uri = std::move(value); }

    /**
     * <p>The URI for the SIP address.</p>
     */
    inline void SetUri(const char* value) { m_uriHasBeenSet = true; m_uri.assign(value); }

    /**
     * <p>The URI for the SIP address.</p>
     */
    inline SipAddress& WithUri(const Aws::String& value) { SetUri(value); return *this;}

    /**
     * <p>The URI for the SIP address.</p>
     */
    inline SipAddress& WithUri(Aws::String&& value) { SetUri(std::move(value)); return *this;}

    /**
     * <p>The URI for the SIP address.</p>
     */
    inline SipAddress& WithUri(const char* value) { SetUri(value); return *this;}


    /**
     * <p>The type of the SIP address.</p>
     */
    inline const SipType& GetType() const{ return m_type; }

    /**
     * <p>The type of the SIP address.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the SIP address.</p>
     */
    inline void SetType(const SipType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the SIP address.</p>
     */
    inline void SetType(SipType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the SIP address.</p>
     */
    inline SipAddress& WithType(const SipType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the SIP address.</p>
     */
    inline SipAddress& WithType(SipType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_uri;
    bool m_uriHasBeenSet;

    SipType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
