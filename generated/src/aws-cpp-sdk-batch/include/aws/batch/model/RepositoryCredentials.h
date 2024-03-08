/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>The repository credentials for private registry authentication.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/RepositoryCredentials">AWS
   * API Reference</a></p>
   */
  class RepositoryCredentials
  {
  public:
    AWS_BATCH_API RepositoryCredentials();
    AWS_BATCH_API RepositoryCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API RepositoryCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the secret containing the private
     * repository credentials.</p>
     */
    inline const Aws::String& GetCredentialsParameter() const{ return m_credentialsParameter; }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret containing the private
     * repository credentials.</p>
     */
    inline bool CredentialsParameterHasBeenSet() const { return m_credentialsParameterHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret containing the private
     * repository credentials.</p>
     */
    inline void SetCredentialsParameter(const Aws::String& value) { m_credentialsParameterHasBeenSet = true; m_credentialsParameter = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret containing the private
     * repository credentials.</p>
     */
    inline void SetCredentialsParameter(Aws::String&& value) { m_credentialsParameterHasBeenSet = true; m_credentialsParameter = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret containing the private
     * repository credentials.</p>
     */
    inline void SetCredentialsParameter(const char* value) { m_credentialsParameterHasBeenSet = true; m_credentialsParameter.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret containing the private
     * repository credentials.</p>
     */
    inline RepositoryCredentials& WithCredentialsParameter(const Aws::String& value) { SetCredentialsParameter(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the secret containing the private
     * repository credentials.</p>
     */
    inline RepositoryCredentials& WithCredentialsParameter(Aws::String&& value) { SetCredentialsParameter(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the secret containing the private
     * repository credentials.</p>
     */
    inline RepositoryCredentials& WithCredentialsParameter(const char* value) { SetCredentialsParameter(value); return *this;}

  private:

    Aws::String m_credentialsParameter;
    bool m_credentialsParameterHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
