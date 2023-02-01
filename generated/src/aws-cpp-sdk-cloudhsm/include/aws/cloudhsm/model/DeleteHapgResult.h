/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsm/CloudHSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudHSM
{
namespace Model
{
  /**
   * <p>Contains the output of the <a>DeleteHapg</a> action.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/DeleteHapgResponse">AWS
   * API Reference</a></p>
   */
  class DeleteHapgResult
  {
  public:
    AWS_CLOUDHSM_API DeleteHapgResult();
    AWS_CLOUDHSM_API DeleteHapgResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDHSM_API DeleteHapgResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the action.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the action.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_status = value; }

    /**
     * <p>The status of the action.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the action.</p>
     */
    inline void SetStatus(const char* value) { m_status.assign(value); }

    /**
     * <p>The status of the action.</p>
     */
    inline DeleteHapgResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the action.</p>
     */
    inline DeleteHapgResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the action.</p>
     */
    inline DeleteHapgResult& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    Aws::String m_status;
  };

} // namespace Model
} // namespace CloudHSM
} // namespace Aws
