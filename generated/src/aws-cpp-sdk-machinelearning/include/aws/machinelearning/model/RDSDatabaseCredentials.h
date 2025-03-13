/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
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
namespace MachineLearning
{
namespace Model
{

  /**
   * <p>The database credentials to connect to a database on an RDS DB
   * instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/RDSDatabaseCredentials">AWS
   * API Reference</a></p>
   */
  class RDSDatabaseCredentials
  {
  public:
    AWS_MACHINELEARNING_API RDSDatabaseCredentials() = default;
    AWS_MACHINELEARNING_API RDSDatabaseCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACHINELEARNING_API RDSDatabaseCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACHINELEARNING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetUsername() const { return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    template<typename UsernameT = Aws::String>
    void SetUsername(UsernameT&& value) { m_usernameHasBeenSet = true; m_username = std::forward<UsernameT>(value); }
    template<typename UsernameT = Aws::String>
    RDSDatabaseCredentials& WithUsername(UsernameT&& value) { SetUsername(std::forward<UsernameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetPassword() const { return m_password; }
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
    template<typename PasswordT = Aws::String>
    void SetPassword(PasswordT&& value) { m_passwordHasBeenSet = true; m_password = std::forward<PasswordT>(value); }
    template<typename PasswordT = Aws::String>
    RDSDatabaseCredentials& WithPassword(PasswordT&& value) { SetPassword(std::forward<PasswordT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
