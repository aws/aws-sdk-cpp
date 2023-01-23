/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p> The result structure for an Amplify app update request. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/UpdateAppResult">AWS
   * API Reference</a></p>
   */
  class UpdateAppResult
  {
  public:
    AWS_AMPLIFY_API UpdateAppResult();
    AWS_AMPLIFY_API UpdateAppResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFY_API UpdateAppResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Represents the updated Amplify app. </p>
     */
    inline const App& GetApp() const{ return m_app; }

    /**
     * <p> Represents the updated Amplify app. </p>
     */
    inline void SetApp(const App& value) { m_app = value; }

    /**
     * <p> Represents the updated Amplify app. </p>
     */
    inline void SetApp(App&& value) { m_app = std::move(value); }

    /**
     * <p> Represents the updated Amplify app. </p>
     */
    inline UpdateAppResult& WithApp(const App& value) { SetApp(value); return *this;}

    /**
     * <p> Represents the updated Amplify app. </p>
     */
    inline UpdateAppResult& WithApp(App&& value) { SetApp(std::move(value)); return *this;}

  private:

    App m_app;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
