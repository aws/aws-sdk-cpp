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
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/amplify/model/App.h>
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
namespace Amplify
{
namespace Model
{
  /**
   * <p> Result structure for an Amplify App update request. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/UpdateAppResult">AWS
   * API Reference</a></p>
   */
  class AWS_AMPLIFY_API UpdateAppResult
  {
  public:
    UpdateAppResult();
    UpdateAppResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateAppResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> App structure for the updated App. </p>
     */
    inline const App& GetApp() const{ return m_app; }

    /**
     * <p> App structure for the updated App. </p>
     */
    inline void SetApp(const App& value) { m_app = value; }

    /**
     * <p> App structure for the updated App. </p>
     */
    inline void SetApp(App&& value) { m_app = std::move(value); }

    /**
     * <p> App structure for the updated App. </p>
     */
    inline UpdateAppResult& WithApp(const App& value) { SetApp(value); return *this;}

    /**
     * <p> App structure for the updated App. </p>
     */
    inline UpdateAppResult& WithApp(App&& value) { SetApp(std::move(value)); return *this;}

  private:

    App m_app;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
