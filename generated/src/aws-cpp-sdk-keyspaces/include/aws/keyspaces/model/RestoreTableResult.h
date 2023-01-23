/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
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
namespace Keyspaces
{
namespace Model
{
  class RestoreTableResult
  {
  public:
    AWS_KEYSPACES_API RestoreTableResult();
    AWS_KEYSPACES_API RestoreTableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KEYSPACES_API RestoreTableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the restored table.</p>
     */
    inline const Aws::String& GetRestoredTableARN() const{ return m_restoredTableARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the restored table.</p>
     */
    inline void SetRestoredTableARN(const Aws::String& value) { m_restoredTableARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the restored table.</p>
     */
    inline void SetRestoredTableARN(Aws::String&& value) { m_restoredTableARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the restored table.</p>
     */
    inline void SetRestoredTableARN(const char* value) { m_restoredTableARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the restored table.</p>
     */
    inline RestoreTableResult& WithRestoredTableARN(const Aws::String& value) { SetRestoredTableARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the restored table.</p>
     */
    inline RestoreTableResult& WithRestoredTableARN(Aws::String&& value) { SetRestoredTableARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the restored table.</p>
     */
    inline RestoreTableResult& WithRestoredTableARN(const char* value) { SetRestoredTableARN(value); return *this;}

  private:

    Aws::String m_restoredTableARN;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
