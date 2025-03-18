/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/b2bi/model/EdiConfiguration.h>
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
namespace B2BI
{
namespace Model
{

  /**
   * <p>A capability object. Currently, only EDI (electronic data interchange)
   * capabilities are supported. A trading capability contains the information
   * required to transform incoming EDI documents into JSON or XML
   * outputs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/CapabilityConfiguration">AWS
   * API Reference</a></p>
   */
  class CapabilityConfiguration
  {
  public:
    AWS_B2BI_API CapabilityConfiguration() = default;
    AWS_B2BI_API CapabilityConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API CapabilityConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An EDI (electronic data interchange) configuration object.</p>
     */
    inline const EdiConfiguration& GetEdi() const { return m_edi; }
    inline bool EdiHasBeenSet() const { return m_ediHasBeenSet; }
    template<typename EdiT = EdiConfiguration>
    void SetEdi(EdiT&& value) { m_ediHasBeenSet = true; m_edi = std::forward<EdiT>(value); }
    template<typename EdiT = EdiConfiguration>
    CapabilityConfiguration& WithEdi(EdiT&& value) { SetEdi(std::forward<EdiT>(value)); return *this;}
    ///@}
  private:

    EdiConfiguration m_edi;
    bool m_ediHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
