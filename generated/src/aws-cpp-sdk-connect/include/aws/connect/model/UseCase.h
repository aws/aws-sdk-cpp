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
    AWS_CONNECT_API UseCase();
    AWS_CONNECT_API UseCase(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API UseCase& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier for the use case.</p>
     */
    inline const Aws::String& GetUseCaseId() const{ return m_useCaseId; }

    /**
     * <p>The identifier for the use case.</p>
     */
    inline bool UseCaseIdHasBeenSet() const { return m_useCaseIdHasBeenSet; }

    /**
     * <p>The identifier for the use case.</p>
     */
    inline void SetUseCaseId(const Aws::String& value) { m_useCaseIdHasBeenSet = true; m_useCaseId = value; }

    /**
     * <p>The identifier for the use case.</p>
     */
    inline void SetUseCaseId(Aws::String&& value) { m_useCaseIdHasBeenSet = true; m_useCaseId = std::move(value); }

    /**
     * <p>The identifier for the use case.</p>
     */
    inline void SetUseCaseId(const char* value) { m_useCaseIdHasBeenSet = true; m_useCaseId.assign(value); }

    /**
     * <p>The identifier for the use case.</p>
     */
    inline UseCase& WithUseCaseId(const Aws::String& value) { SetUseCaseId(value); return *this;}

    /**
     * <p>The identifier for the use case.</p>
     */
    inline UseCase& WithUseCaseId(Aws::String&& value) { SetUseCaseId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the use case.</p>
     */
    inline UseCase& WithUseCaseId(const char* value) { SetUseCaseId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the use case.</p>
     */
    inline const Aws::String& GetUseCaseArn() const{ return m_useCaseArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the use case.</p>
     */
    inline bool UseCaseArnHasBeenSet() const { return m_useCaseArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the use case.</p>
     */
    inline void SetUseCaseArn(const Aws::String& value) { m_useCaseArnHasBeenSet = true; m_useCaseArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the use case.</p>
     */
    inline void SetUseCaseArn(Aws::String&& value) { m_useCaseArnHasBeenSet = true; m_useCaseArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the use case.</p>
     */
    inline void SetUseCaseArn(const char* value) { m_useCaseArnHasBeenSet = true; m_useCaseArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the use case.</p>
     */
    inline UseCase& WithUseCaseArn(const Aws::String& value) { SetUseCaseArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the use case.</p>
     */
    inline UseCase& WithUseCaseArn(Aws::String&& value) { SetUseCaseArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the use case.</p>
     */
    inline UseCase& WithUseCaseArn(const char* value) { SetUseCaseArn(value); return *this;}


    /**
     * <p>The type of use case to associate to the integration association. Each
     * integration association can have only one of each use case type.</p>
     */
    inline const UseCaseType& GetUseCaseType() const{ return m_useCaseType; }

    /**
     * <p>The type of use case to associate to the integration association. Each
     * integration association can have only one of each use case type.</p>
     */
    inline bool UseCaseTypeHasBeenSet() const { return m_useCaseTypeHasBeenSet; }

    /**
     * <p>The type of use case to associate to the integration association. Each
     * integration association can have only one of each use case type.</p>
     */
    inline void SetUseCaseType(const UseCaseType& value) { m_useCaseTypeHasBeenSet = true; m_useCaseType = value; }

    /**
     * <p>The type of use case to associate to the integration association. Each
     * integration association can have only one of each use case type.</p>
     */
    inline void SetUseCaseType(UseCaseType&& value) { m_useCaseTypeHasBeenSet = true; m_useCaseType = std::move(value); }

    /**
     * <p>The type of use case to associate to the integration association. Each
     * integration association can have only one of each use case type.</p>
     */
    inline UseCase& WithUseCaseType(const UseCaseType& value) { SetUseCaseType(value); return *this;}

    /**
     * <p>The type of use case to associate to the integration association. Each
     * integration association can have only one of each use case type.</p>
     */
    inline UseCase& WithUseCaseType(UseCaseType&& value) { SetUseCaseType(std::move(value)); return *this;}

  private:

    Aws::String m_useCaseId;
    bool m_useCaseIdHasBeenSet = false;

    Aws::String m_useCaseArn;
    bool m_useCaseArnHasBeenSet = false;

    UseCaseType m_useCaseType;
    bool m_useCaseTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
