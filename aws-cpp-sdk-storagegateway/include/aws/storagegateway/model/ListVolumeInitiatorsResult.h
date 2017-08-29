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
   * <p>ListVolumeInitiatorsOutput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/ListVolumeInitiatorsOutput">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API ListVolumeInitiatorsResult
  {
  public:
    ListVolumeInitiatorsResult();
    ListVolumeInitiatorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListVolumeInitiatorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The host names and port numbers of all iSCSI initiators that are connected to
     * the gateway.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInitiators() const{ return m_initiators; }

    /**
     * <p>The host names and port numbers of all iSCSI initiators that are connected to
     * the gateway.</p>
     */
    inline void SetInitiators(const Aws::Vector<Aws::String>& value) { m_initiators = value; }

    /**
     * <p>The host names and port numbers of all iSCSI initiators that are connected to
     * the gateway.</p>
     */
    inline void SetInitiators(Aws::Vector<Aws::String>&& value) { m_initiators = std::move(value); }

    /**
     * <p>The host names and port numbers of all iSCSI initiators that are connected to
     * the gateway.</p>
     */
    inline ListVolumeInitiatorsResult& WithInitiators(const Aws::Vector<Aws::String>& value) { SetInitiators(value); return *this;}

    /**
     * <p>The host names and port numbers of all iSCSI initiators that are connected to
     * the gateway.</p>
     */
    inline ListVolumeInitiatorsResult& WithInitiators(Aws::Vector<Aws::String>&& value) { SetInitiators(std::move(value)); return *this;}

    /**
     * <p>The host names and port numbers of all iSCSI initiators that are connected to
     * the gateway.</p>
     */
    inline ListVolumeInitiatorsResult& AddInitiators(const Aws::String& value) { m_initiators.push_back(value); return *this; }

    /**
     * <p>The host names and port numbers of all iSCSI initiators that are connected to
     * the gateway.</p>
     */
    inline ListVolumeInitiatorsResult& AddInitiators(Aws::String&& value) { m_initiators.push_back(std::move(value)); return *this; }

    /**
     * <p>The host names and port numbers of all iSCSI initiators that are connected to
     * the gateway.</p>
     */
    inline ListVolumeInitiatorsResult& AddInitiators(const char* value) { m_initiators.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_initiators;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
