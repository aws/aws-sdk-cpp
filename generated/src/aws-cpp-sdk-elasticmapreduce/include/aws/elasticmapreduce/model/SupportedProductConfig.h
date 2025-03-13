/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>The list of supported product configurations that allow user-supplied
   * arguments. Amazon EMR accepts these arguments and forwards them to the
   * corresponding installation script as bootstrap action arguments.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/SupportedProductConfig">AWS
   * API Reference</a></p>
   */
  class SupportedProductConfig
  {
  public:
    AWS_EMR_API SupportedProductConfig() = default;
    AWS_EMR_API SupportedProductConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API SupportedProductConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the product configuration.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    SupportedProductConfig& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of user-supplied arguments.</p>
     */
    inline const Aws::Vector<Aws::String>& GetArgs() const { return m_args; }
    inline bool ArgsHasBeenSet() const { return m_argsHasBeenSet; }
    template<typename ArgsT = Aws::Vector<Aws::String>>
    void SetArgs(ArgsT&& value) { m_argsHasBeenSet = true; m_args = std::forward<ArgsT>(value); }
    template<typename ArgsT = Aws::Vector<Aws::String>>
    SupportedProductConfig& WithArgs(ArgsT&& value) { SetArgs(std::forward<ArgsT>(value)); return *this;}
    template<typename ArgsT = Aws::String>
    SupportedProductConfig& AddArgs(ArgsT&& value) { m_argsHasBeenSet = true; m_args.emplace_back(std::forward<ArgsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_args;
    bool m_argsHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
