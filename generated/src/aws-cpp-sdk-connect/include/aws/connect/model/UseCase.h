/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/UseCaseType.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Contains the use case.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UseCase">AWS API
   * Reference</a></p>
   */
  class UseCase
  {
  public:
    AWS_CONNECT_API UseCase() = default;
    AWS_CONNECT_API UseCase(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API UseCase& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for the use case.</p>
     */
    inline const Aws::String& GetUseCaseId() const { return m_useCaseId; }
    inline bool UseCaseIdHasBeenSet() const { return m_useCaseIdHasBeenSet; }
    template<typename UseCaseIdT = Aws::String>
    void SetUseCaseId(UseCaseIdT&& value) { m_useCaseIdHasBeenSet = true; m_useCaseId = std::forward<UseCaseIdT>(value); }
    template<typename UseCaseIdT = Aws::String>
    UseCase& WithUseCaseId(UseCaseIdT&& value) { SetUseCaseId(std::forward<UseCaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the use case.</p>
     */
    inline const Aws::String& GetUseCaseArn() const { return m_useCaseArn; }
    inline bool UseCaseArnHasBeenSet() const { return m_useCaseArnHasBeenSet; }
    template<typename UseCaseArnT = Aws::String>
    void SetUseCaseArn(UseCaseArnT&& value) { m_useCaseArnHasBeenSet = true; m_useCaseArn = std::forward<UseCaseArnT>(value); }
    template<typename UseCaseArnT = Aws::String>
    UseCase& WithUseCaseArn(UseCaseArnT&& value) { SetUseCaseArn(std::forward<UseCaseArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of use case to associate to the integration association. Each
     * integration association can have only one of each use case type.</p>
     */
    inline UseCaseType GetUseCaseType() const { return m_useCaseType; }
    inline bool UseCaseTypeHasBeenSet() const { return m_useCaseTypeHasBeenSet; }
    inline void SetUseCaseType(UseCaseType value) { m_useCaseTypeHasBeenSet = true; m_useCaseType = value; }
    inline UseCase& WithUseCaseType(UseCaseType value) { SetUseCaseType(value); return *this;}
    ///@}
  private:

    Aws::String m_useCaseId;
    bool m_useCaseIdHasBeenSet = false;

    Aws::String m_useCaseArn;
    bool m_useCaseArnHasBeenSet = false;

    UseCaseType m_useCaseType{UseCaseType::NOT_SET};
    bool m_useCaseTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
