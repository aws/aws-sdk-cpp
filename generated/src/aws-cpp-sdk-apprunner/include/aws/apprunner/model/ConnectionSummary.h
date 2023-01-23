/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apprunner/model/ProviderType.h>
#include <aws/apprunner/model/ConnectionStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace AppRunner
{
namespace Model
{

  /**
   * <p>Provides summary information about an App Runner connection
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/ConnectionSummary">AWS
   * API Reference</a></p>
   */
  class ConnectionSummary
  {
  public:
    AWS_APPRUNNER_API ConnectionSummary();
    AWS_APPRUNNER_API ConnectionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API ConnectionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The customer-provided connection name.</p>
     */
    inline const Aws::String& GetConnectionName() const{ return m_connectionName; }

    /**
     * <p>The customer-provided connection name.</p>
     */
    inline bool ConnectionNameHasBeenSet() const { return m_connectionNameHasBeenSet; }

    /**
     * <p>The customer-provided connection name.</p>
     */
    inline void SetConnectionName(const Aws::String& value) { m_connectionNameHasBeenSet = true; m_connectionName = value; }

    /**
     * <p>The customer-provided connection name.</p>
     */
    inline void SetConnectionName(Aws::String&& value) { m_connectionNameHasBeenSet = true; m_connectionName = std::move(value); }

    /**
     * <p>The customer-provided connection name.</p>
     */
    inline void SetConnectionName(const char* value) { m_connectionNameHasBeenSet = true; m_connectionName.assign(value); }

    /**
     * <p>The customer-provided connection name.</p>
     */
    inline ConnectionSummary& WithConnectionName(const Aws::String& value) { SetConnectionName(value); return *this;}

    /**
     * <p>The customer-provided connection name.</p>
     */
    inline ConnectionSummary& WithConnectionName(Aws::String&& value) { SetConnectionName(std::move(value)); return *this;}

    /**
     * <p>The customer-provided connection name.</p>
     */
    inline ConnectionSummary& WithConnectionName(const char* value) { SetConnectionName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of this connection.</p>
     */
    inline const Aws::String& GetConnectionArn() const{ return m_connectionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of this connection.</p>
     */
    inline bool ConnectionArnHasBeenSet() const { return m_connectionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of this connection.</p>
     */
    inline void SetConnectionArn(const Aws::String& value) { m_connectionArnHasBeenSet = true; m_connectionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of this connection.</p>
     */
    inline void SetConnectionArn(Aws::String&& value) { m_connectionArnHasBeenSet = true; m_connectionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of this connection.</p>
     */
    inline void SetConnectionArn(const char* value) { m_connectionArnHasBeenSet = true; m_connectionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of this connection.</p>
     */
    inline ConnectionSummary& WithConnectionArn(const Aws::String& value) { SetConnectionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of this connection.</p>
     */
    inline ConnectionSummary& WithConnectionArn(Aws::String&& value) { SetConnectionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of this connection.</p>
     */
    inline ConnectionSummary& WithConnectionArn(const char* value) { SetConnectionArn(value); return *this;}


    /**
     * <p>The source repository provider.</p>
     */
    inline const ProviderType& GetProviderType() const{ return m_providerType; }

    /**
     * <p>The source repository provider.</p>
     */
    inline bool ProviderTypeHasBeenSet() const { return m_providerTypeHasBeenSet; }

    /**
     * <p>The source repository provider.</p>
     */
    inline void SetProviderType(const ProviderType& value) { m_providerTypeHasBeenSet = true; m_providerType = value; }

    /**
     * <p>The source repository provider.</p>
     */
    inline void SetProviderType(ProviderType&& value) { m_providerTypeHasBeenSet = true; m_providerType = std::move(value); }

    /**
     * <p>The source repository provider.</p>
     */
    inline ConnectionSummary& WithProviderType(const ProviderType& value) { SetProviderType(value); return *this;}

    /**
     * <p>The source repository provider.</p>
     */
    inline ConnectionSummary& WithProviderType(ProviderType&& value) { SetProviderType(std::move(value)); return *this;}


    /**
     * <p>The current state of the App Runner connection. When the state is
     * <code>AVAILABLE</code>, you can use the connection to create an App Runner
     * service.</p>
     */
    inline const ConnectionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current state of the App Runner connection. When the state is
     * <code>AVAILABLE</code>, you can use the connection to create an App Runner
     * service.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current state of the App Runner connection. When the state is
     * <code>AVAILABLE</code>, you can use the connection to create an App Runner
     * service.</p>
     */
    inline void SetStatus(const ConnectionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current state of the App Runner connection. When the state is
     * <code>AVAILABLE</code>, you can use the connection to create an App Runner
     * service.</p>
     */
    inline void SetStatus(ConnectionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current state of the App Runner connection. When the state is
     * <code>AVAILABLE</code>, you can use the connection to create an App Runner
     * service.</p>
     */
    inline ConnectionSummary& WithStatus(const ConnectionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current state of the App Runner connection. When the state is
     * <code>AVAILABLE</code>, you can use the connection to create an App Runner
     * service.</p>
     */
    inline ConnectionSummary& WithStatus(ConnectionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The App Runner connection creation time, expressed as a Unix time stamp.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The App Runner connection creation time, expressed as a Unix time stamp.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The App Runner connection creation time, expressed as a Unix time stamp.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The App Runner connection creation time, expressed as a Unix time stamp.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The App Runner connection creation time, expressed as a Unix time stamp.</p>
     */
    inline ConnectionSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The App Runner connection creation time, expressed as a Unix time stamp.</p>
     */
    inline ConnectionSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_connectionName;
    bool m_connectionNameHasBeenSet = false;

    Aws::String m_connectionArn;
    bool m_connectionArnHasBeenSet = false;

    ProviderType m_providerType;
    bool m_providerTypeHasBeenSet = false;

    ConnectionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
