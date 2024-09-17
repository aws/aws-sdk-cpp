/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>The IAM principal that you allowing or denying access to an Amazon Lex
   * action. You must provide a <code>service</code> or an <code>arn</code>, but not
   * both in the same statement. For more information, see <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html">
   * AWS JSON policy elements: Principal </a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/Principal">AWS
   * API Reference</a></p>
   */
  class Principal
  {
  public:
    AWS_LEXMODELSV2_API Principal();
    AWS_LEXMODELSV2_API Principal(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Principal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Amazon Web Services service that should allowed or denied
     * access to an Amazon Lex action.</p>
     */
    inline const Aws::String& GetService() const{ return m_service; }
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
    inline void SetService(const Aws::String& value) { m_serviceHasBeenSet = true; m_service = value; }
    inline void SetService(Aws::String&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }
    inline void SetService(const char* value) { m_serviceHasBeenSet = true; m_service.assign(value); }
    inline Principal& WithService(const Aws::String& value) { SetService(value); return *this;}
    inline Principal& WithService(Aws::String&& value) { SetService(std::move(value)); return *this;}
    inline Principal& WithService(const char* value) { SetService(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the principal.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Principal& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Principal& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Principal& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}
  private:

    Aws::String m_service;
    bool m_serviceHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
