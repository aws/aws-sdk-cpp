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
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appmesh/model/Duration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appmesh/model/TcpRetryPolicyEvent.h>
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
namespace AppMesh
{
namespace Model
{

  /**
   * <p>An object that represents a retry policy. Specify at least one value for at
   * least one of the types of <code>RetryEvents</code>, a value for
   * <code>maxRetries</code>, and a value for
   * <code>perRetryTimeout</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/HttpRetryPolicy">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API HttpRetryPolicy
  {
  public:
    HttpRetryPolicy();
    HttpRetryPolicy(Aws::Utils::Json::JsonView jsonValue);
    HttpRetryPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specify at least one of the following values.</p>
         <ul>
           
     * <li>
               <p>
                  <b>server-error</b> – HTTP status
     * codes 500, 501,
                  502, 503, 504, 505, 506, 507, 508, 510, and
     * 511</p>
            </li>
            <li>
               <p>
                 
     * <b>gateway-error</b> – HTTP status codes 502,
                  503, and
     * 504</p>
            </li>
            <li>
               <p>
                 
     * <b>client-error</b> – HTTP status code 409</p>
            </li>
           
     * <li>
               <p>
                  <b>stream-error</b> – Retry on
     * refused
                  stream</p>
            </li>
         </ul>
     */
    inline const Aws::Vector<Aws::String>& GetHttpRetryEvents() const{ return m_httpRetryEvents; }

    /**
     * <p>Specify at least one of the following values.</p>
         <ul>
           
     * <li>
               <p>
                  <b>server-error</b> – HTTP status
     * codes 500, 501,
                  502, 503, 504, 505, 506, 507, 508, 510, and
     * 511</p>
            </li>
            <li>
               <p>
                 
     * <b>gateway-error</b> – HTTP status codes 502,
                  503, and
     * 504</p>
            </li>
            <li>
               <p>
                 
     * <b>client-error</b> – HTTP status code 409</p>
            </li>
           
     * <li>
               <p>
                  <b>stream-error</b> – Retry on
     * refused
                  stream</p>
            </li>
         </ul>
     */
    inline bool HttpRetryEventsHasBeenSet() const { return m_httpRetryEventsHasBeenSet; }

    /**
     * <p>Specify at least one of the following values.</p>
         <ul>
           
     * <li>
               <p>
                  <b>server-error</b> – HTTP status
     * codes 500, 501,
                  502, 503, 504, 505, 506, 507, 508, 510, and
     * 511</p>
            </li>
            <li>
               <p>
                 
     * <b>gateway-error</b> – HTTP status codes 502,
                  503, and
     * 504</p>
            </li>
            <li>
               <p>
                 
     * <b>client-error</b> – HTTP status code 409</p>
            </li>
           
     * <li>
               <p>
                  <b>stream-error</b> – Retry on
     * refused
                  stream</p>
            </li>
         </ul>
     */
    inline void SetHttpRetryEvents(const Aws::Vector<Aws::String>& value) { m_httpRetryEventsHasBeenSet = true; m_httpRetryEvents = value; }

    /**
     * <p>Specify at least one of the following values.</p>
         <ul>
           
     * <li>
               <p>
                  <b>server-error</b> – HTTP status
     * codes 500, 501,
                  502, 503, 504, 505, 506, 507, 508, 510, and
     * 511</p>
            </li>
            <li>
               <p>
                 
     * <b>gateway-error</b> – HTTP status codes 502,
                  503, and
     * 504</p>
            </li>
            <li>
               <p>
                 
     * <b>client-error</b> – HTTP status code 409</p>
            </li>
           
     * <li>
               <p>
                  <b>stream-error</b> – Retry on
     * refused
                  stream</p>
            </li>
         </ul>
     */
    inline void SetHttpRetryEvents(Aws::Vector<Aws::String>&& value) { m_httpRetryEventsHasBeenSet = true; m_httpRetryEvents = std::move(value); }

    /**
     * <p>Specify at least one of the following values.</p>
         <ul>
           
     * <li>
               <p>
                  <b>server-error</b> – HTTP status
     * codes 500, 501,
                  502, 503, 504, 505, 506, 507, 508, 510, and
     * 511</p>
            </li>
            <li>
               <p>
                 
     * <b>gateway-error</b> – HTTP status codes 502,
                  503, and
     * 504</p>
            </li>
            <li>
               <p>
                 
     * <b>client-error</b> – HTTP status code 409</p>
            </li>
           
     * <li>
               <p>
                  <b>stream-error</b> – Retry on
     * refused
                  stream</p>
            </li>
         </ul>
     */
    inline HttpRetryPolicy& WithHttpRetryEvents(const Aws::Vector<Aws::String>& value) { SetHttpRetryEvents(value); return *this;}

    /**
     * <p>Specify at least one of the following values.</p>
         <ul>
           
     * <li>
               <p>
                  <b>server-error</b> – HTTP status
     * codes 500, 501,
                  502, 503, 504, 505, 506, 507, 508, 510, and
     * 511</p>
            </li>
            <li>
               <p>
                 
     * <b>gateway-error</b> – HTTP status codes 502,
                  503, and
     * 504</p>
            </li>
            <li>
               <p>
                 
     * <b>client-error</b> – HTTP status code 409</p>
            </li>
           
     * <li>
               <p>
                  <b>stream-error</b> – Retry on
     * refused
                  stream</p>
            </li>
         </ul>
     */
    inline HttpRetryPolicy& WithHttpRetryEvents(Aws::Vector<Aws::String>&& value) { SetHttpRetryEvents(std::move(value)); return *this;}

    /**
     * <p>Specify at least one of the following values.</p>
         <ul>
           
     * <li>
               <p>
                  <b>server-error</b> – HTTP status
     * codes 500, 501,
                  502, 503, 504, 505, 506, 507, 508, 510, and
     * 511</p>
            </li>
            <li>
               <p>
                 
     * <b>gateway-error</b> – HTTP status codes 502,
                  503, and
     * 504</p>
            </li>
            <li>
               <p>
                 
     * <b>client-error</b> – HTTP status code 409</p>
            </li>
           
     * <li>
               <p>
                  <b>stream-error</b> – Retry on
     * refused
                  stream</p>
            </li>
         </ul>
     */
    inline HttpRetryPolicy& AddHttpRetryEvents(const Aws::String& value) { m_httpRetryEventsHasBeenSet = true; m_httpRetryEvents.push_back(value); return *this; }

    /**
     * <p>Specify at least one of the following values.</p>
         <ul>
           
     * <li>
               <p>
                  <b>server-error</b> – HTTP status
     * codes 500, 501,
                  502, 503, 504, 505, 506, 507, 508, 510, and
     * 511</p>
            </li>
            <li>
               <p>
                 
     * <b>gateway-error</b> – HTTP status codes 502,
                  503, and
     * 504</p>
            </li>
            <li>
               <p>
                 
     * <b>client-error</b> – HTTP status code 409</p>
            </li>
           
     * <li>
               <p>
                  <b>stream-error</b> – Retry on
     * refused
                  stream</p>
            </li>
         </ul>
     */
    inline HttpRetryPolicy& AddHttpRetryEvents(Aws::String&& value) { m_httpRetryEventsHasBeenSet = true; m_httpRetryEvents.push_back(std::move(value)); return *this; }

    /**
     * <p>Specify at least one of the following values.</p>
         <ul>
           
     * <li>
               <p>
                  <b>server-error</b> – HTTP status
     * codes 500, 501,
                  502, 503, 504, 505, 506, 507, 508, 510, and
     * 511</p>
            </li>
            <li>
               <p>
                 
     * <b>gateway-error</b> – HTTP status codes 502,
                  503, and
     * 504</p>
            </li>
            <li>
               <p>
                 
     * <b>client-error</b> – HTTP status code 409</p>
            </li>
           
     * <li>
               <p>
                  <b>stream-error</b> – Retry on
     * refused
                  stream</p>
            </li>
         </ul>
     */
    inline HttpRetryPolicy& AddHttpRetryEvents(const char* value) { m_httpRetryEventsHasBeenSet = true; m_httpRetryEvents.push_back(value); return *this; }


    /**
     * <p>The maximum number of retry attempts.</p>
     */
    inline long long GetMaxRetries() const{ return m_maxRetries; }

    /**
     * <p>The maximum number of retry attempts.</p>
     */
    inline bool MaxRetriesHasBeenSet() const { return m_maxRetriesHasBeenSet; }

    /**
     * <p>The maximum number of retry attempts.</p>
     */
    inline void SetMaxRetries(long long value) { m_maxRetriesHasBeenSet = true; m_maxRetries = value; }

    /**
     * <p>The maximum number of retry attempts.</p>
     */
    inline HttpRetryPolicy& WithMaxRetries(long long value) { SetMaxRetries(value); return *this;}


    /**
     * <p>An object that represents a duration of time.</p>
     */
    inline const Duration& GetPerRetryTimeout() const{ return m_perRetryTimeout; }

    /**
     * <p>An object that represents a duration of time.</p>
     */
    inline bool PerRetryTimeoutHasBeenSet() const { return m_perRetryTimeoutHasBeenSet; }

    /**
     * <p>An object that represents a duration of time.</p>
     */
    inline void SetPerRetryTimeout(const Duration& value) { m_perRetryTimeoutHasBeenSet = true; m_perRetryTimeout = value; }

    /**
     * <p>An object that represents a duration of time.</p>
     */
    inline void SetPerRetryTimeout(Duration&& value) { m_perRetryTimeoutHasBeenSet = true; m_perRetryTimeout = std::move(value); }

    /**
     * <p>An object that represents a duration of time.</p>
     */
    inline HttpRetryPolicy& WithPerRetryTimeout(const Duration& value) { SetPerRetryTimeout(value); return *this;}

    /**
     * <p>An object that represents a duration of time.</p>
     */
    inline HttpRetryPolicy& WithPerRetryTimeout(Duration&& value) { SetPerRetryTimeout(std::move(value)); return *this;}


    /**
     * <p>Specify a valid value.</p>
     */
    inline const Aws::Vector<TcpRetryPolicyEvent>& GetTcpRetryEvents() const{ return m_tcpRetryEvents; }

    /**
     * <p>Specify a valid value.</p>
     */
    inline bool TcpRetryEventsHasBeenSet() const { return m_tcpRetryEventsHasBeenSet; }

    /**
     * <p>Specify a valid value.</p>
     */
    inline void SetTcpRetryEvents(const Aws::Vector<TcpRetryPolicyEvent>& value) { m_tcpRetryEventsHasBeenSet = true; m_tcpRetryEvents = value; }

    /**
     * <p>Specify a valid value.</p>
     */
    inline void SetTcpRetryEvents(Aws::Vector<TcpRetryPolicyEvent>&& value) { m_tcpRetryEventsHasBeenSet = true; m_tcpRetryEvents = std::move(value); }

    /**
     * <p>Specify a valid value.</p>
     */
    inline HttpRetryPolicy& WithTcpRetryEvents(const Aws::Vector<TcpRetryPolicyEvent>& value) { SetTcpRetryEvents(value); return *this;}

    /**
     * <p>Specify a valid value.</p>
     */
    inline HttpRetryPolicy& WithTcpRetryEvents(Aws::Vector<TcpRetryPolicyEvent>&& value) { SetTcpRetryEvents(std::move(value)); return *this;}

    /**
     * <p>Specify a valid value.</p>
     */
    inline HttpRetryPolicy& AddTcpRetryEvents(const TcpRetryPolicyEvent& value) { m_tcpRetryEventsHasBeenSet = true; m_tcpRetryEvents.push_back(value); return *this; }

    /**
     * <p>Specify a valid value.</p>
     */
    inline HttpRetryPolicy& AddTcpRetryEvents(TcpRetryPolicyEvent&& value) { m_tcpRetryEventsHasBeenSet = true; m_tcpRetryEvents.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_httpRetryEvents;
    bool m_httpRetryEventsHasBeenSet;

    long long m_maxRetries;
    bool m_maxRetriesHasBeenSet;

    Duration m_perRetryTimeout;
    bool m_perRetryTimeoutHasBeenSet;

    Aws::Vector<TcpRetryPolicyEvent> m_tcpRetryEvents;
    bool m_tcpRetryEventsHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
