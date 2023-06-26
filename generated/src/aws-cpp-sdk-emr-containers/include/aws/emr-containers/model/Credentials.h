/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
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
namespace EMRContainers
{
namespace Model
{

  /**
   * <p>The structure containing the session token being returned.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/Credentials">AWS
   * API Reference</a></p>
   */
  class Credentials
  {
  public:
    AWS_EMRCONTAINERS_API Credentials();
    AWS_EMRCONTAINERS_API Credentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Credentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The actual session token being returned.</p>
     */
    inline const Aws::String& GetToken() const{ return m_token; }

    /**
     * <p>The actual session token being returned.</p>
     */
    inline bool TokenHasBeenSet() const { return m_tokenHasBeenSet; }

    /**
     * <p>The actual session token being returned.</p>
     */
    inline void SetToken(const Aws::String& value) { m_tokenHasBeenSet = true; m_token = value; }

    /**
     * <p>The actual session token being returned.</p>
     */
    inline void SetToken(Aws::String&& value) { m_tokenHasBeenSet = true; m_token = std::move(value); }

    /**
     * <p>The actual session token being returned.</p>
     */
    inline void SetToken(const char* value) { m_tokenHasBeenSet = true; m_token.assign(value); }

    /**
     * <p>The actual session token being returned.</p>
     */
    inline Credentials& WithToken(const Aws::String& value) { SetToken(value); return *this;}

    /**
     * <p>The actual session token being returned.</p>
     */
    inline Credentials& WithToken(Aws::String&& value) { SetToken(std::move(value)); return *this;}

    /**
     * <p>The actual session token being returned.</p>
     */
    inline Credentials& WithToken(const char* value) { SetToken(value); return *this;}

  private:

    Aws::String m_token;
    bool m_tokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
