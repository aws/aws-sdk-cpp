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


    /**
     * <p>The name of the AWS service that should allowed or denied access to an Amazon
     * Lex action.</p>
     */
    inline const Aws::String& GetService() const{ return m_service; }

    /**
     * <p>The name of the AWS service that should allowed or denied access to an Amazon
     * Lex action.</p>
     */
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }

    /**
     * <p>The name of the AWS service that should allowed or denied access to an Amazon
     * Lex action.</p>
     */
    inline void SetService(const Aws::String& value) { m_serviceHasBeenSet = true; m_service = value; }

    /**
     * <p>The name of the AWS service that should allowed or denied access to an Amazon
     * Lex action.</p>
     */
    inline void SetService(Aws::String&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }

    /**
     * <p>The name of the AWS service that should allowed or denied access to an Amazon
     * Lex action.</p>
     */
    inline void SetService(const char* value) { m_serviceHasBeenSet = true; m_service.assign(value); }

    /**
     * <p>The name of the AWS service that should allowed or denied access to an Amazon
     * Lex action.</p>
     */
    inline Principal& WithService(const Aws::String& value) { SetService(value); return *this;}

    /**
     * <p>The name of the AWS service that should allowed or denied access to an Amazon
     * Lex action.</p>
     */
    inline Principal& WithService(Aws::String&& value) { SetService(std::move(value)); return *this;}

    /**
     * <p>The name of the AWS service that should allowed or denied access to an Amazon
     * Lex action.</p>
     */
    inline Principal& WithService(const char* value) { SetService(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the principal.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the principal.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the principal.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the principal.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the principal.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the principal.</p>
     */
    inline Principal& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the principal.</p>
     */
    inline Principal& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the principal.</p>
     */
    inline Principal& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_service;
    bool m_serviceHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
