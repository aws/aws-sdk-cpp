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
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace StorageGateway
{
namespace Model
{
  /**
   * <p>CreateTapeOutput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/CreateTapesOutput">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API CreateTapesResult
  {
  public:
    CreateTapesResult();
    CreateTapesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateTapesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of unique Amazon Resource Names (ARNs) that represents the virtual
     * tapes that were created.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTapeARNs() const{ return m_tapeARNs; }

    /**
     * <p>A list of unique Amazon Resource Names (ARNs) that represents the virtual
     * tapes that were created.</p>
     */
    inline void SetTapeARNs(const Aws::Vector<Aws::String>& value) { m_tapeARNs = value; }

    /**
     * <p>A list of unique Amazon Resource Names (ARNs) that represents the virtual
     * tapes that were created.</p>
     */
    inline void SetTapeARNs(Aws::Vector<Aws::String>&& value) { m_tapeARNs = std::move(value); }

    /**
     * <p>A list of unique Amazon Resource Names (ARNs) that represents the virtual
     * tapes that were created.</p>
     */
    inline CreateTapesResult& WithTapeARNs(const Aws::Vector<Aws::String>& value) { SetTapeARNs(value); return *this;}

    /**
     * <p>A list of unique Amazon Resource Names (ARNs) that represents the virtual
     * tapes that were created.</p>
     */
    inline CreateTapesResult& WithTapeARNs(Aws::Vector<Aws::String>&& value) { SetTapeARNs(std::move(value)); return *this;}

    /**
     * <p>A list of unique Amazon Resource Names (ARNs) that represents the virtual
     * tapes that were created.</p>
     */
    inline CreateTapesResult& AddTapeARNs(const Aws::String& value) { m_tapeARNs.push_back(value); return *this; }

    /**
     * <p>A list of unique Amazon Resource Names (ARNs) that represents the virtual
     * tapes that were created.</p>
     */
    inline CreateTapesResult& AddTapeARNs(Aws::String&& value) { m_tapeARNs.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of unique Amazon Resource Names (ARNs) that represents the virtual
     * tapes that were created.</p>
     */
    inline CreateTapesResult& AddTapeARNs(const char* value) { m_tapeARNs.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_tapeARNs;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
