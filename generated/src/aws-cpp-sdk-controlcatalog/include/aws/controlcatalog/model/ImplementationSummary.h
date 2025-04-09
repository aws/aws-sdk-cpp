/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controlcatalog/ControlCatalog_EXPORTS.h>
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
namespace ControlCatalog
{
namespace Model
{

  /**
   * <p>A summary of how the control is implemented, including the Amazon Web
   * Services service that enforces the control and its service-specific identifier.
   * For example, the value of this field could indicate that the control is
   * implemented as an Amazon Web Services Config Rule or an Amazon Web Services
   * Security Hub control.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/controlcatalog-2018-05-10/ImplementationSummary">AWS
   * API Reference</a></p>
   */
  class ImplementationSummary
  {
  public:
    AWS_CONTROLCATALOG_API ImplementationSummary() = default;
    AWS_CONTROLCATALOG_API ImplementationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLCATALOG_API ImplementationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLCATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A string that represents the Amazon Web Services service that implements this
     * control. For example, a value of <code>AWS::Config::ConfigRule</code> indicates
     * that the control is implemented by Amazon Web Services Config, and
     * <code>AWS::SecurityHub::SecurityControl</code> indicates implementation by
     * Amazon Web Services Security Hub.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    ImplementationSummary& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier originally assigned by the Amazon Web Services service that
     * implements the control. For example,
     * <code>CODEPIPELINE_DEPLOYMENT_COUNT_CHECK</code>.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    ImplementationSummary& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlCatalog
} // namespace Aws
