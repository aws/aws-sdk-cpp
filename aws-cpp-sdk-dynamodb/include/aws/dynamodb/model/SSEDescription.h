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
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/SSEStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>The description of the server-side encryption status on the specified
   * table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/SSEDescription">AWS
   * API Reference</a></p>
   */
  class AWS_DYNAMODB_API SSEDescription
  {
  public:
    SSEDescription();
    SSEDescription(const Aws::Utils::Json::JsonValue& jsonValue);
    SSEDescription& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The current state of server-side encryption:</p> <ul> <li> <p>
     * <code>ENABLING</code> - Server-side encryption is being enabled.</p> </li> <li>
     * <p> <code>ENABLED</code> - Server-side encryption is enabled.</p> </li> <li> <p>
     * <code>DISABLING</code> - Server-side encryption is being disabled.</p> </li>
     * <li> <p> <code>DISABLED</code> - Server-side encryption is disabled.</p> </li>
     * </ul>
     */
    inline const SSEStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current state of server-side encryption:</p> <ul> <li> <p>
     * <code>ENABLING</code> - Server-side encryption is being enabled.</p> </li> <li>
     * <p> <code>ENABLED</code> - Server-side encryption is enabled.</p> </li> <li> <p>
     * <code>DISABLING</code> - Server-side encryption is being disabled.</p> </li>
     * <li> <p> <code>DISABLED</code> - Server-side encryption is disabled.</p> </li>
     * </ul>
     */
    inline void SetStatus(const SSEStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current state of server-side encryption:</p> <ul> <li> <p>
     * <code>ENABLING</code> - Server-side encryption is being enabled.</p> </li> <li>
     * <p> <code>ENABLED</code> - Server-side encryption is enabled.</p> </li> <li> <p>
     * <code>DISABLING</code> - Server-side encryption is being disabled.</p> </li>
     * <li> <p> <code>DISABLED</code> - Server-side encryption is disabled.</p> </li>
     * </ul>
     */
    inline void SetStatus(SSEStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current state of server-side encryption:</p> <ul> <li> <p>
     * <code>ENABLING</code> - Server-side encryption is being enabled.</p> </li> <li>
     * <p> <code>ENABLED</code> - Server-side encryption is enabled.</p> </li> <li> <p>
     * <code>DISABLING</code> - Server-side encryption is being disabled.</p> </li>
     * <li> <p> <code>DISABLED</code> - Server-side encryption is disabled.</p> </li>
     * </ul>
     */
    inline SSEDescription& WithStatus(const SSEStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current state of server-side encryption:</p> <ul> <li> <p>
     * <code>ENABLING</code> - Server-side encryption is being enabled.</p> </li> <li>
     * <p> <code>ENABLED</code> - Server-side encryption is enabled.</p> </li> <li> <p>
     * <code>DISABLING</code> - Server-side encryption is being disabled.</p> </li>
     * <li> <p> <code>DISABLED</code> - Server-side encryption is disabled.</p> </li>
     * </ul>
     */
    inline SSEDescription& WithStatus(SSEStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    SSEStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
