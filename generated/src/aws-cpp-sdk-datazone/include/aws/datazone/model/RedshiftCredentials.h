/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/UsernamePassword.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>Amazon Redshift credentials of a connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/RedshiftCredentials">AWS
   * API Reference</a></p>
   */
  class RedshiftCredentials
  {
  public:
    AWS_DATAZONE_API RedshiftCredentials();
    AWS_DATAZONE_API RedshiftCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API RedshiftCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The secret ARN of the Amazon Redshift credentials of a connection.</p>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }
    inline RedshiftCredentials& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}
    inline RedshiftCredentials& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}
    inline RedshiftCredentials& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The username and password of the Amazon Redshift credentials of a
     * connection.</p>
     */
    inline const UsernamePassword& GetUsernamePassword() const{ return m_usernamePassword; }
    inline bool UsernamePasswordHasBeenSet() const { return m_usernamePasswordHasBeenSet; }
    inline void SetUsernamePassword(const UsernamePassword& value) { m_usernamePasswordHasBeenSet = true; m_usernamePassword = value; }
    inline void SetUsernamePassword(UsernamePassword&& value) { m_usernamePasswordHasBeenSet = true; m_usernamePassword = std::move(value); }
    inline RedshiftCredentials& WithUsernamePassword(const UsernamePassword& value) { SetUsernamePassword(value); return *this;}
    inline RedshiftCredentials& WithUsernamePassword(UsernamePassword&& value) { SetUsernamePassword(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    UsernamePassword m_usernamePassword;
    bool m_usernamePasswordHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
