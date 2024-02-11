/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace AppFabric
{
namespace Model
{

  /**
   * <p>Contains API key credential information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appfabric-2023-05-19/ApiKeyCredential">AWS
   * API Reference</a></p>
   */
  class ApiKeyCredential
  {
  public:
    AWS_APPFABRIC_API ApiKeyCredential();
    AWS_APPFABRIC_API ApiKeyCredential(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API ApiKeyCredential& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An API key for an application.</p>
     */
    inline const Aws::String& GetApiKey() const{ return m_apiKey; }

    /**
     * <p>An API key for an application.</p>
     */
    inline bool ApiKeyHasBeenSet() const { return m_apiKeyHasBeenSet; }

    /**
     * <p>An API key for an application.</p>
     */
    inline void SetApiKey(const Aws::String& value) { m_apiKeyHasBeenSet = true; m_apiKey = value; }

    /**
     * <p>An API key for an application.</p>
     */
    inline void SetApiKey(Aws::String&& value) { m_apiKeyHasBeenSet = true; m_apiKey = std::move(value); }

    /**
     * <p>An API key for an application.</p>
     */
    inline void SetApiKey(const char* value) { m_apiKeyHasBeenSet = true; m_apiKey.assign(value); }

    /**
     * <p>An API key for an application.</p>
     */
    inline ApiKeyCredential& WithApiKey(const Aws::String& value) { SetApiKey(value); return *this;}

    /**
     * <p>An API key for an application.</p>
     */
    inline ApiKeyCredential& WithApiKey(Aws::String&& value) { SetApiKey(std::move(value)); return *this;}

    /**
     * <p>An API key for an application.</p>
     */
    inline ApiKeyCredential& WithApiKey(const char* value) { SetApiKey(value); return *this;}

  private:

    Aws::String m_apiKey;
    bool m_apiKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
