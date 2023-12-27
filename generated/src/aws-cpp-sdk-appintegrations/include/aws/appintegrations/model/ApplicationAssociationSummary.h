/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
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
namespace AppIntegrationsService
{
namespace Model
{

  /**
   * <p>Summary information about the Application Association.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/ApplicationAssociationSummary">AWS
   * API Reference</a></p>
   */
  class ApplicationAssociationSummary
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API ApplicationAssociationSummary();
    AWS_APPINTEGRATIONSSERVICE_API ApplicationAssociationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPINTEGRATIONSSERVICE_API ApplicationAssociationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPINTEGRATIONSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the Application Association.</p>
     */
    inline const Aws::String& GetApplicationAssociationArn() const{ return m_applicationAssociationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Application Association.</p>
     */
    inline bool ApplicationAssociationArnHasBeenSet() const { return m_applicationAssociationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Application Association.</p>
     */
    inline void SetApplicationAssociationArn(const Aws::String& value) { m_applicationAssociationArnHasBeenSet = true; m_applicationAssociationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Application Association.</p>
     */
    inline void SetApplicationAssociationArn(Aws::String&& value) { m_applicationAssociationArnHasBeenSet = true; m_applicationAssociationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Application Association.</p>
     */
    inline void SetApplicationAssociationArn(const char* value) { m_applicationAssociationArnHasBeenSet = true; m_applicationAssociationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Application Association.</p>
     */
    inline ApplicationAssociationSummary& WithApplicationAssociationArn(const Aws::String& value) { SetApplicationAssociationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Application Association.</p>
     */
    inline ApplicationAssociationSummary& WithApplicationAssociationArn(Aws::String&& value) { SetApplicationAssociationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Application Association.</p>
     */
    inline ApplicationAssociationSummary& WithApplicationAssociationArn(const char* value) { SetApplicationAssociationArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Application.</p>
     */
    inline const Aws::String& GetApplicationArn() const{ return m_applicationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Application.</p>
     */
    inline bool ApplicationArnHasBeenSet() const { return m_applicationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Application.</p>
     */
    inline void SetApplicationArn(const Aws::String& value) { m_applicationArnHasBeenSet = true; m_applicationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Application.</p>
     */
    inline void SetApplicationArn(Aws::String&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Application.</p>
     */
    inline void SetApplicationArn(const char* value) { m_applicationArnHasBeenSet = true; m_applicationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Application.</p>
     */
    inline ApplicationAssociationSummary& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Application.</p>
     */
    inline ApplicationAssociationSummary& WithApplicationArn(Aws::String&& value) { SetApplicationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Application.</p>
     */
    inline ApplicationAssociationSummary& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}


    /**
     * <p>The identifier for the client that is associated with the Application
     * Association.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }

    /**
     * <p>The identifier for the client that is associated with the Application
     * Association.</p>
     */
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }

    /**
     * <p>The identifier for the client that is associated with the Application
     * Association.</p>
     */
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }

    /**
     * <p>The identifier for the client that is associated with the Application
     * Association.</p>
     */
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }

    /**
     * <p>The identifier for the client that is associated with the Application
     * Association.</p>
     */
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }

    /**
     * <p>The identifier for the client that is associated with the Application
     * Association.</p>
     */
    inline ApplicationAssociationSummary& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * <p>The identifier for the client that is associated with the Application
     * Association.</p>
     */
    inline ApplicationAssociationSummary& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the client that is associated with the Application
     * Association.</p>
     */
    inline ApplicationAssociationSummary& WithClientId(const char* value) { SetClientId(value); return *this;}

  private:

    Aws::String m_applicationAssociationArn;
    bool m_applicationAssociationArnHasBeenSet = false;

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet = false;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
