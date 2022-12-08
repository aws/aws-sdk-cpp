/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
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
namespace OpsWorks
{
namespace Model
{
  /**
   * <p>Contains the response to a <code>CloneStack</code> request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/CloneStackResult">AWS
   * API Reference</a></p>
   */
  class CloneStackResult
  {
  public:
    AWS_OPSWORKS_API CloneStackResult();
    AWS_OPSWORKS_API CloneStackResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKS_API CloneStackResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The cloned stack ID.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>The cloned stack ID.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackId = value; }

    /**
     * <p>The cloned stack ID.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackId = std::move(value); }

    /**
     * <p>The cloned stack ID.</p>
     */
    inline void SetStackId(const char* value) { m_stackId.assign(value); }

    /**
     * <p>The cloned stack ID.</p>
     */
    inline CloneStackResult& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>The cloned stack ID.</p>
     */
    inline CloneStackResult& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}

    /**
     * <p>The cloned stack ID.</p>
     */
    inline CloneStackResult& WithStackId(const char* value) { SetStackId(value); return *this;}

  private:

    Aws::String m_stackId;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
