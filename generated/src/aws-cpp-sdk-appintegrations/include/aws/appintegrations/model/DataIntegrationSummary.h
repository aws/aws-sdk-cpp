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
   * <p>Summary information about the DataIntegration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/DataIntegrationSummary">AWS
   * API Reference</a></p>
   */
  class DataIntegrationSummary
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API DataIntegrationSummary();
    AWS_APPINTEGRATIONSSERVICE_API DataIntegrationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPINTEGRATIONSSERVICE_API DataIntegrationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPINTEGRATIONSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the DataIntegration.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline DataIntegrationSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DataIntegrationSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DataIntegrationSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the DataIntegration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DataIntegrationSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DataIntegrationSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DataIntegrationSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI of the data source.</p>
     */
    inline const Aws::String& GetSourceURI() const{ return m_sourceURI; }
    inline bool SourceURIHasBeenSet() const { return m_sourceURIHasBeenSet; }
    inline void SetSourceURI(const Aws::String& value) { m_sourceURIHasBeenSet = true; m_sourceURI = value; }
    inline void SetSourceURI(Aws::String&& value) { m_sourceURIHasBeenSet = true; m_sourceURI = std::move(value); }
    inline void SetSourceURI(const char* value) { m_sourceURIHasBeenSet = true; m_sourceURI.assign(value); }
    inline DataIntegrationSummary& WithSourceURI(const Aws::String& value) { SetSourceURI(value); return *this;}
    inline DataIntegrationSummary& WithSourceURI(Aws::String&& value) { SetSourceURI(std::move(value)); return *this;}
    inline DataIntegrationSummary& WithSourceURI(const char* value) { SetSourceURI(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_sourceURI;
    bool m_sourceURIHasBeenSet = false;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
