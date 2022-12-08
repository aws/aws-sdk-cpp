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
   * <p>Summary information about the DataIntegration association.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/DataIntegrationAssociationSummary">AWS
   * API Reference</a></p>
   */
  class DataIntegrationAssociationSummary
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API DataIntegrationAssociationSummary();
    AWS_APPINTEGRATIONSSERVICE_API DataIntegrationAssociationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPINTEGRATIONSSERVICE_API DataIntegrationAssociationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPINTEGRATIONSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the DataIntegration association.</p>
     */
    inline const Aws::String& GetDataIntegrationAssociationArn() const{ return m_dataIntegrationAssociationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the DataIntegration association.</p>
     */
    inline bool DataIntegrationAssociationArnHasBeenSet() const { return m_dataIntegrationAssociationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the DataIntegration association.</p>
     */
    inline void SetDataIntegrationAssociationArn(const Aws::String& value) { m_dataIntegrationAssociationArnHasBeenSet = true; m_dataIntegrationAssociationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the DataIntegration association.</p>
     */
    inline void SetDataIntegrationAssociationArn(Aws::String&& value) { m_dataIntegrationAssociationArnHasBeenSet = true; m_dataIntegrationAssociationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the DataIntegration association.</p>
     */
    inline void SetDataIntegrationAssociationArn(const char* value) { m_dataIntegrationAssociationArnHasBeenSet = true; m_dataIntegrationAssociationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the DataIntegration association.</p>
     */
    inline DataIntegrationAssociationSummary& WithDataIntegrationAssociationArn(const Aws::String& value) { SetDataIntegrationAssociationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the DataIntegration association.</p>
     */
    inline DataIntegrationAssociationSummary& WithDataIntegrationAssociationArn(Aws::String&& value) { SetDataIntegrationAssociationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the DataIntegration association.</p>
     */
    inline DataIntegrationAssociationSummary& WithDataIntegrationAssociationArn(const char* value) { SetDataIntegrationAssociationArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN)of the DataIntegration.</p>
     */
    inline const Aws::String& GetDataIntegrationArn() const{ return m_dataIntegrationArn; }

    /**
     * <p>The Amazon Resource Name (ARN)of the DataIntegration.</p>
     */
    inline bool DataIntegrationArnHasBeenSet() const { return m_dataIntegrationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN)of the DataIntegration.</p>
     */
    inline void SetDataIntegrationArn(const Aws::String& value) { m_dataIntegrationArnHasBeenSet = true; m_dataIntegrationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN)of the DataIntegration.</p>
     */
    inline void SetDataIntegrationArn(Aws::String&& value) { m_dataIntegrationArnHasBeenSet = true; m_dataIntegrationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN)of the DataIntegration.</p>
     */
    inline void SetDataIntegrationArn(const char* value) { m_dataIntegrationArnHasBeenSet = true; m_dataIntegrationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN)of the DataIntegration.</p>
     */
    inline DataIntegrationAssociationSummary& WithDataIntegrationArn(const Aws::String& value) { SetDataIntegrationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN)of the DataIntegration.</p>
     */
    inline DataIntegrationAssociationSummary& WithDataIntegrationArn(Aws::String&& value) { SetDataIntegrationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN)of the DataIntegration.</p>
     */
    inline DataIntegrationAssociationSummary& WithDataIntegrationArn(const char* value) { SetDataIntegrationArn(value); return *this;}


    /**
     * <p>The identifier for teh client that is associated with the DataIntegration
     * association.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }

    /**
     * <p>The identifier for teh client that is associated with the DataIntegration
     * association.</p>
     */
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }

    /**
     * <p>The identifier for teh client that is associated with the DataIntegration
     * association.</p>
     */
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }

    /**
     * <p>The identifier for teh client that is associated with the DataIntegration
     * association.</p>
     */
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }

    /**
     * <p>The identifier for teh client that is associated with the DataIntegration
     * association.</p>
     */
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }

    /**
     * <p>The identifier for teh client that is associated with the DataIntegration
     * association.</p>
     */
    inline DataIntegrationAssociationSummary& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * <p>The identifier for teh client that is associated with the DataIntegration
     * association.</p>
     */
    inline DataIntegrationAssociationSummary& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}

    /**
     * <p>The identifier for teh client that is associated with the DataIntegration
     * association.</p>
     */
    inline DataIntegrationAssociationSummary& WithClientId(const char* value) { SetClientId(value); return *this;}

  private:

    Aws::String m_dataIntegrationAssociationArn;
    bool m_dataIntegrationAssociationArnHasBeenSet = false;

    Aws::String m_dataIntegrationArn;
    bool m_dataIntegrationArnHasBeenSet = false;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
