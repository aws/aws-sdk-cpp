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
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicediscovery/model/OperationStatus.h>
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
namespace ServiceDiscovery
{
namespace Model
{

  /**
   * <p>A complex type that contains information about an operation that matches the
   * criteria that you specified in a <a>ListOperations</a> request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/OperationSummary">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICEDISCOVERY_API OperationSummary
  {
  public:
    OperationSummary();
    OperationSummary(Aws::Utils::Json::JsonView jsonValue);
    OperationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID for an operation.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID for an operation.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID for an operation.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID for an operation.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID for an operation.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID for an operation.</p>
     */
    inline OperationSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID for an operation.</p>
     */
    inline OperationSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID for an operation.</p>
     */
    inline OperationSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The status of the operation. Values include the following:</p> <ul> <li> <p>
     * <b>SUBMITTED</b>: This is the initial state immediately after you submit a
     * request.</p> </li> <li> <p> <b>PENDING</b>: AWS Cloud Map is performing the
     * operation.</p> </li> <li> <p> <b>SUCCESS</b>: The operation succeeded.</p> </li>
     * <li> <p> <b>FAIL</b>: The operation failed. For the failure reason, see
     * <code>ErrorMessage</code>.</p> </li> </ul>
     */
    inline const OperationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the operation. Values include the following:</p> <ul> <li> <p>
     * <b>SUBMITTED</b>: This is the initial state immediately after you submit a
     * request.</p> </li> <li> <p> <b>PENDING</b>: AWS Cloud Map is performing the
     * operation.</p> </li> <li> <p> <b>SUCCESS</b>: The operation succeeded.</p> </li>
     * <li> <p> <b>FAIL</b>: The operation failed. For the failure reason, see
     * <code>ErrorMessage</code>.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the operation. Values include the following:</p> <ul> <li> <p>
     * <b>SUBMITTED</b>: This is the initial state immediately after you submit a
     * request.</p> </li> <li> <p> <b>PENDING</b>: AWS Cloud Map is performing the
     * operation.</p> </li> <li> <p> <b>SUCCESS</b>: The operation succeeded.</p> </li>
     * <li> <p> <b>FAIL</b>: The operation failed. For the failure reason, see
     * <code>ErrorMessage</code>.</p> </li> </ul>
     */
    inline void SetStatus(const OperationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the operation. Values include the following:</p> <ul> <li> <p>
     * <b>SUBMITTED</b>: This is the initial state immediately after you submit a
     * request.</p> </li> <li> <p> <b>PENDING</b>: AWS Cloud Map is performing the
     * operation.</p> </li> <li> <p> <b>SUCCESS</b>: The operation succeeded.</p> </li>
     * <li> <p> <b>FAIL</b>: The operation failed. For the failure reason, see
     * <code>ErrorMessage</code>.</p> </li> </ul>
     */
    inline void SetStatus(OperationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the operation. Values include the following:</p> <ul> <li> <p>
     * <b>SUBMITTED</b>: This is the initial state immediately after you submit a
     * request.</p> </li> <li> <p> <b>PENDING</b>: AWS Cloud Map is performing the
     * operation.</p> </li> <li> <p> <b>SUCCESS</b>: The operation succeeded.</p> </li>
     * <li> <p> <b>FAIL</b>: The operation failed. For the failure reason, see
     * <code>ErrorMessage</code>.</p> </li> </ul>
     */
    inline OperationSummary& WithStatus(const OperationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the operation. Values include the following:</p> <ul> <li> <p>
     * <b>SUBMITTED</b>: This is the initial state immediately after you submit a
     * request.</p> </li> <li> <p> <b>PENDING</b>: AWS Cloud Map is performing the
     * operation.</p> </li> <li> <p> <b>SUCCESS</b>: The operation succeeded.</p> </li>
     * <li> <p> <b>FAIL</b>: The operation failed. For the failure reason, see
     * <code>ErrorMessage</code>.</p> </li> </ul>
     */
    inline OperationSummary& WithStatus(OperationStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    OperationStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
