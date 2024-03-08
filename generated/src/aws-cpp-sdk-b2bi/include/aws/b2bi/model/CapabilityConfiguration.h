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
    AWS_B2BI_API CapabilityConfiguration();
    AWS_B2BI_API CapabilityConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API CapabilityConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An EDI (electronic data interchange) configuration object.</p>
     */
    inline const EdiConfiguration& GetEdi() const{ return m_edi; }

    /**
     * <p>An EDI (electronic data interchange) configuration object.</p>
     */
    inline bool EdiHasBeenSet() const { return m_ediHasBeenSet; }

    /**
     * <p>An EDI (electronic data interchange) configuration object.</p>
     */
    inline void SetEdi(const EdiConfiguration& value) { m_ediHasBeenSet = true; m_edi = value; }

    /**
     * <p>An EDI (electronic data interchange) configuration object.</p>
     */
    inline void SetEdi(EdiConfiguration&& value) { m_ediHasBeenSet = true; m_edi = std::move(value); }

    /**
     * <p>An EDI (electronic data interchange) configuration object.</p>
     */
    inline CapabilityConfiguration& WithEdi(const EdiConfiguration& value) { SetEdi(value); return *this;}

    /**
     * <p>An EDI (electronic data interchange) configuration object.</p>
     */
    inline CapabilityConfiguration& WithEdi(EdiConfiguration&& value) { SetEdi(std::move(value)); return *this;}

  private:

    EdiConfiguration m_edi;
    bool m_ediHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
