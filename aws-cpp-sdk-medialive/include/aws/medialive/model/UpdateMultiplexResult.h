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
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/Multiplex.h>
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
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for UpdateMultiplexResponse<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateMultiplexResponse">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API UpdateMultiplexResult
  {
  public:
    UpdateMultiplexResult();
    UpdateMultiplexResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateMultiplexResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The updated multiplex.
     */
    inline const Multiplex& GetMultiplex() const{ return m_multiplex; }

    /**
     * The updated multiplex.
     */
    inline void SetMultiplex(const Multiplex& value) { m_multiplex = value; }

    /**
     * The updated multiplex.
     */
    inline void SetMultiplex(Multiplex&& value) { m_multiplex = std::move(value); }

    /**
     * The updated multiplex.
     */
    inline UpdateMultiplexResult& WithMultiplex(const Multiplex& value) { SetMultiplex(value); return *this;}

    /**
     * The updated multiplex.
     */
    inline UpdateMultiplexResult& WithMultiplex(Multiplex&& value) { SetMultiplex(std::move(value)); return *this;}

  private:

    Multiplex m_multiplex;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
